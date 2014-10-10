DBGeneratorCI
=============

A simple class that generates CoreImage `CIFilter` subclasses to allow the use of property setters to set values on filters.

The CoreImage framework can be a daunting experience, especially for the novice. With heavy reliance on KVC, misspelled property names are a regular occurrence and there is zero code completion. The following snippet demonstrates the problem very well. 
```objc
CIImage *image   = [CIImage emptyImage];
CIFilter *filter = [CIFilter filterWithName:@"CIColorPolynomial"];

[filter setValue:image forKey:@"inputImage"];
[filter setValue:[CIVector vectorWithX:0 Y:1 Z:0 W:0] forKey:@"inputAlphaCoefficients"];
[filter setValue:[CIVector vectorWithX:0 Y:0 Z:1 W:0] forKey:@"inputBlueCoefficients"];
[filter setValue:[CIVector vectorWithX:1 Y:0 Z:0 W:0] forKey:@"inputGreenCoefficients"];
[filter setValue:[CIVector vectorWithX:0 Y:0 Z:0 W:1] forKey:@"inputRedCoefficients"];
```
Almost always, you'll have to make a trip to the documentation to retrieve the correct name of the filter, look up properties that must be set and reference the default values that are set automatically. Being extremely lazy in that sense, I've create a generator to automatically create CIFilter subclasses of all available filters on the platform, create the header and implementation files, and include all the default values and types for each filter property. Like so:
```objc
...

@interface DBFlashTransition : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIColor *inputColor;               // Color     | Default: (1 0.8 0.6 1)
@property (strong, nonatomic) CIImage *inputImage;               // Image 
@property (strong, nonatomic) CIImage *inputTargetImage;         // Image 
@property (strong, nonatomic) CIVector *inputCenter;             // Position  | Default: [150 150]
@property (strong, nonatomic) CIVector *inputExtent;             // Rectangle | Default: [0 0 300 300]
@property (strong, nonatomic) NSNumber *inputFadeThreshold;      // Scalar    | Default: 0.85
@property (strong, nonatomic) NSNumber *inputMaxStriationRadius; // Scalar    | Default: 2.58
@property (strong, nonatomic) NSNumber *inputStriationContrast;  // Scalar    | Default: 1.375
@property (strong, nonatomic) NSNumber *inputStriationStrength;  // Scalar    | Default: 0.5
@property (strong, nonatomic) NSNumber *inputTime;               // Time      | Default: 0

@end

...
```
On iOS, the header file contains 130 subclasses of all available `CIFilter` types. Each subclasses has a property corresponding to adjustable values that exist for each filter. Creating a filter no longer requires remembering it's name and exact spelling, Xcode will assist with auto-completion. Also, no need to reference the documentation for default values and available properties. Simply start typing "input" and auto-complete will work its magic.

You can now use the subclass:
```objc
CIImage *image                = [CIImage emptyImage];
DBColorPolynomial *filter     = [DBColorPolynomial filter];
filter.inputImage             = image;
filter.inputAlphaCoefficients = [CIVector vectorWithX:0 Y:1 Z:0 W:0];
filter.inputBlueCoefficients  = [CIVector vectorWithX:0 Y:0 Z:1 W:0];
filter.inputGreenCoefficients = [CIVector vectorWithX:1 Y:0 Z:0 W:0];
filter.inputRedCoefficients   = [CIVector vectorWithX:0 Y:0 Z:0 W:1];
```
The generator supports both iOS and Mac OS so generating `CIFilter` subclasses is easy regardless of the platform:
```objc
NSString *path   = [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) firstObject];
DBGeneratorCI *g = [[DBGeneratorCI alloc] initWithFileName:@"DBFilters" classPrefix:@"DB"];
[g setConvertScalars:YES]; // Will do nothing on OS X
[g generate];
[g writePairToDirectory:path error:nil];
```
You can provide your own file name and prefix for full customizability.

On iOS setting `convertScalars` will automatically add setters for `NSValue` types. These `NSValue` types only exist for the purpose of wrapping `CGAffineTransform` structs and offer an overwhelmingly ugly API:
```objc
CIFilter *filter    = [CIFilter filterWithName:@"CIAffineClamp"];
[filter setValue:image forKey:@"inputImage"];
CGAffineTransform t = CGAffineTransformMakeRotation(M_PI);
[filter setValue:[NSValue valueWithBytes:&t objCType:@encode(CGAffineTransform)] forKey:@"inputTransform"];
```
You will now be able to set a transform like so:
```objc
DBAffineClamp *filter         = [DBAffineClamp filter];
filter.inputImage             = image;
filter.inputTransformT        = CGAffineTransformMakeRotation(M_PI);
```

You can use `DBGeneratorCI` to generate your own custom subclasses, or you can use the pre-generated subclasses found in the "iOS Generated" and "Mac OS Generated" folders in this repository. Hopefully, this will make using Core Image a much more enjoyable process for you. I know it has for me.
