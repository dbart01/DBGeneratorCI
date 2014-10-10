//
//  DBGeneratorCI.m
//  DD Keyboard
//
//  Created by Dima Bart on 2014-10-08.
//  Copyright (c) 2014 Dima Bart. All rights reserved.
//

#import "DBGeneratorCI.h"

static NSString * const kDBAttributePropertyName = @"DBAttributePropertyName";

#if TARGET_OS_IPHONE
#import <CoreImage/CoreImage.h>
#else
#import <QuartzCore/QuartzCore.h>
#endif

typedef enum {
    DBReferenceTypeStrong,
    DBReferenceTypeWeak,
    DBReferenceTypeAssign,
} DBReferenceType;

@interface DBGeneratorCI ()

@property (strong, nonatomic) NSString *fileName;
@property (strong, nonatomic) NSString *classPrefix;

@property (strong, nonatomic) NSMutableString *hString;
@property (strong, nonatomic) NSMutableString *mString;

@end

@implementation DBGeneratorCI

#pragma mark - Init -
- (instancetype)initWithFileName:(NSString *)fileName classPrefix:(NSString *)classPrefix {
    self = [super init];
    if (self) {
        _fileName    = fileName;
        _classPrefix = classPrefix;
    }
    return self;
}

- (BOOL)writePairToDirectory:(NSString *)directory error:(NSError **)error {
    NSFileManager *f = [NSFileManager defaultManager];
    
    // Ensure directory exists before writing
    if (![f fileExistsAtPath:directory]) {
        if (![f createDirectoryAtPath:directory withIntermediateDirectories:YES attributes:nil error:error]) {
            return NO;
        }
    }
    
    NSString *h   = [directory stringByAppendingPathComponent:[NSString stringWithFormat:@"%@.h", _fileName]];
    NSString *m   = [directory stringByAppendingPathComponent:[NSString stringWithFormat:@"%@.m", _fileName]];
    BOOL hSuccess = [_hString writeToFile:h atomically:YES encoding:NSUTF8StringEncoding error:error];
    BOOL mSuccess = [_mString writeToFile:m atomically:YES encoding:NSUTF8StringEncoding error:error];
    
    return (hSuccess && mSuccess);
}

#pragma mark - Main -
- (void)generate {
    NSArray *filterNames = [self fetchFilterNames];
    int numberOfFilters  = (int)[filterNames count];
    
    _hString = [NSMutableString new];
    [self writeHeaderTopWithFilterCount:numberOfFilters];
    
    _mString = [NSMutableString new];
    [self writeImpTopWithFilterCount:numberOfFilters];
    
    NSArray *sortDescriptors = @[
                                 [NSSortDescriptor sortDescriptorWithKey:kCIAttributeClass ascending:YES],
                                 [NSSortDescriptor sortDescriptorWithKey:kDBAttributePropertyName ascending:YES],
                                 ];
    
    for (NSString *filterName in filterNames) {
        
        CIFilter *filter = [CIFilter filterWithName:filterName];
        if (filter) {
            
            NSString *filterClass =  [filterName stringByReplacingOccurrencesOfString:@"CI" withString:_classPrefix];
            
            [self writeHeaderFilterClassInterface:filterClass];
            [self writeHeaderNewLine];
            [self writeHeaderInitMethod];
            [self writeHeaderNewLine];
            
            [self writeImpFilterClassInterface:filterClass];
            [self writeImpNewLine];
            [self writeImpInitMethodWithFilter:filterName];
            
            NSMutableArray *properties = [NSMutableArray new];
            NSDictionary *attributes   = [filter attributes];
            [attributes enumerateKeysAndObjectsUsingBlock:^(NSString *attribute, id value, BOOL *stop) {
                if ([value isKindOfClass:[NSDictionary class]] && ![attribute hasPrefix:@"CI"]) { // Likely property description
                    
                    NSMutableDictionary *attr      = [value mutableCopy];
                    attr[kDBAttributePropertyName] = attribute;
                    [properties addObject:attr];
                }
            }];
            
            [properties sortUsingDescriptors:sortDescriptors];
            
            for (NSDictionary *property in properties) {
                
                NSString *propertyName = property[kDBAttributePropertyName];
                if ([propertyName isEqualToString:@"outputImage"]) {
                    continue;
                }
                
                NSString *className = property[kCIAttributeClass];
                id  defaultValue    = property[kCIAttributeDefault];
                NSString *type      = [property[kCIAttributeType] stringByReplacingOccurrencesOfString:@"CIAttributeType" withString:@""];
                
                NSMutableString *com = [NSMutableString new];
                if ([type length] > 1) {
                    [com appendFormat:@"%@ ", type];
                }
                if (defaultValue && ![defaultValue isKindOfClass:[NSData class]]) {
#if !TARGET_OS_IPHONE
                    if ([defaultValue isKindOfClass:[NSAffineTransform class]]) {
                        defaultValue = DBStringFromAffineTransform(defaultValue);
                    }
#endif
                    [com appendFormat:@"| Default: %@", defaultValue];
                }
                if ([com length] < 1) {
                    com = nil;
                }
                
#if TARGET_OS_IPHONE
                if (_convertScalars && [className isEqualToString:@"NSValue"]) {
                    
                    NSString *modifiedAttribute = [propertyName stringByAppendingString:@"T"]; // To avoid setter conflict
                    
                    [self writeHeaderProperty:modifiedAttribute scalarType:@"CGAffineTransform" comment:nil];
                    [self writeImpNewLine];
                    [self writeImpAffineTransformSetterWithName:propertyName];
                }
#endif
                
                [self writeHeaderProperty:propertyName class:className comment:com];
                
            }
            
            [self writeHeaderNewLine];
            [self writeHeaderEnd];
            [self writeHeaderNewLine];
            [self writeHeaderNewLine];
            
            [self writeImpNewLine];
            [self writeImpEnd];
            [self writeImpNewLine];
            [self writeImpNewLine];
        }
    }
}

#pragma mark - Filter Queries -
- (NSArray *)fetchFilterNames {
    
    NSMutableArray *f = [NSMutableArray new];
    [f addObject:[CIFilter filterNamesInCategory:kCICategoryDistortionEffect]];
    [f addObject:[CIFilter filterNamesInCategory:kCICategoryGeometryAdjustment]];
    [f addObject:[CIFilter filterNamesInCategory:kCICategoryCompositeOperation]];
    [f addObject:[CIFilter filterNamesInCategory:kCICategoryHalftoneEffect]];
    [f addObject:[CIFilter filterNamesInCategory:kCICategoryColorAdjustment]];
    [f addObject:[CIFilter filterNamesInCategory:kCICategoryColorEffect]];
    [f addObject:[CIFilter filterNamesInCategory:kCICategoryTransition]];
    [f addObject:[CIFilter filterNamesInCategory:kCICategoryTileEffect]];
    [f addObject:[CIFilter filterNamesInCategory:kCICategoryGenerator]];
    [f addObject:[CIFilter filterNamesInCategory:kCICategoryReduction]];
    [f addObject:[CIFilter filterNamesInCategory:kCICategoryGradient]];
    [f addObject:[CIFilter filterNamesInCategory:kCICategoryStylize]];
    [f addObject:[CIFilter filterNamesInCategory:kCICategorySharpen]];
    [f addObject:[CIFilter filterNamesInCategory:kCICategoryBlur]];
    [f addObject:[CIFilter filterNamesInCategory:kCICategoryVideo]];
    [f addObject:[CIFilter filterNamesInCategory:kCICategoryStillImage]];
    [f addObject:[CIFilter filterNamesInCategory:kCICategoryInterlaced]];
    [f addObject:[CIFilter filterNamesInCategory:kCICategoryNonSquarePixels]];
    [f addObject:[CIFilter filterNamesInCategory:kCICategoryHighDynamicRange ]];
    [f addObject:[CIFilter filterNamesInCategory:kCICategoryBuiltIn]];
    
    NSMutableArray *a = [NSMutableArray new];
    for (NSArray *container in f) {
        [a addObjectsFromArray:container];
    }
    
    return [[[NSSet setWithArray:a] allObjects] sortedArrayUsingSelector:@selector(compare:)];
}

#pragma mark - Header Writing -
- (void)writeHeaderTopWithFilterCount:(int)count {
    
#if TARGET_OS_IPHONE
    NSString *import = @"#import <CoreImage/CoreImage.h>";
#else
    NSString *import = @"#import <QuartzCore/QuartzCore.h>";
#endif
    
    [_hString appendFormat:@"\
//\n\
//  %@.m\n\
//\n\
//  Created using DBGeneratorCI, written by Dima Bart on 2014-10-08.\n\
//  Contains %i CIFilter subclasses.\n\
//\n\
\n\
%@\n\n", _fileName, count, import];
}

- (void)writeHeaderFilterClassInterface:(NSString *)filterName {
    [_hString appendFormat:@"@interface %@ : CIFilter\n", filterName];
}

- (void)writeHeaderProperty:(NSString *)name class:(NSString *)className comment:(NSString *)comment {
    [_hString appendFormat:@"@property (strong, nonatomic) %@ *%@; %@\n", className, name, comment ? [NSString stringWithFormat:@"// %@", comment] : @""];
}

- (void)writeHeaderProperty:(NSString *)name scalarType:(NSString *)type comment:(NSString *)comment {
    [_hString appendFormat:@"@property (assign, nonatomic) %@ %@; %@\n", type, name, comment ? [NSString stringWithFormat:@"// %@", comment] : @""];
}

- (void)writeHeaderInitMethod {
    [_hString appendString:@"+ (instancetype)filter;\n"];
}

- (void)writeHeaderNewLine {
    [_hString appendString:@"\n"];
}

- (void)writeHeaderEnd {
    [_hString appendFormat:@"@end\n"];
}

#pragma mark - Implementation Writing -
- (void)writeImpTopWithFilterCount:(int)count {
    [_mString appendFormat:@"\
//\n\
//  %@.m\n\
//\n\
//  Created using DBGeneratorCI, written by Dima Bart on 2014-10-08.\n\
//  Contains %i CIFilter subclasses.\n\
//\n\
\n\
#import \"%@.h\"\n\n", _fileName, count, _fileName];
}

- (void)writeImpFilterClassInterface:(NSString *)filterName {
    [_mString appendFormat:@"@implementation %@\n", filterName];
}

- (void)writeImpInitMethodWithFilter:(NSString *)filterName {
    [_mString appendFormat:@"+ (instancetype)filter {\n\
    return (id)[CIFilter filterWithName:@\"%@\"];\n\
}\n", filterName];
}

- (void)writeImpAffineTransformSetterWithName:(NSString *)name {
    [_mString appendFormat:@"- (void)set%@:(CGAffineTransform)%@ {\n\
    CGAffineTransform t = %@;\n\
    [self setValue:[NSValue valueWithBytes:&t objCType:@encode(CGAffineTransform)] forKey:@\"%@\"];\n\
}\n", DBCapitalizerFirst(name), name, name, name];
}

- (void)writeImpNewLine {
    [_mString appendString:@"\n"];
}

- (void)writeImpEnd {
    [_mString appendFormat:@"@end\n"];
}

#pragma mark - Functions -
//static NSString * DBStringForReferenceType(DBReferenceType type) {
//    switch (type) {
//        case DBReferenceTypeAssign: return @"assign";
//        case DBReferenceTypeStrong: return @"strong";
//        case DBReferenceTypeWeak:   return @"weak";
//    }
//}

static NSString * DBCapitalizerFirst(NSString *string) {
    return [string stringByReplacingCharactersInRange:NSMakeRange(0, 1) withString:[[string substringToIndex:1] uppercaseString]];
}

#if !TARGET_OS_IPHONE
static NSString * DBStringFromAffineTransform(NSAffineTransform *transform) {
    NSAffineTransformStruct t = [transform transformStruct];
    return [NSString stringWithFormat:@"[{%0.4f, %0.4f, %0.4f, %0.4f}, %0.4f, %0.4f]", t.m11, t.m12, t.m21, t.m22, t.tX, t.tY];
}
#endif

@end
