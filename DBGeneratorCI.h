//
//  DBGeneratorCI.h
//  DD Keyboard
//
//  Created by Dima Bart on 2014-10-08.
//  Copyright (c) 2014 Dima Bart. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DBGeneratorCI : NSObject

@property (assign, nonatomic) BOOL convertScalars;

- (instancetype)initWithFileName:(NSString *)fileName classPrefix:(NSString *)classPrefix;
- (void)generate;
- (BOOL)writePairToDirectory:(NSString *)directory error:(NSError **)error;

@end
