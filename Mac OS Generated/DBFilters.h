//
//  DBFilters.m
//
//  Created using DBGeneratorCI, written by Dima Bart on 2014-10-08.
//  Contains 169 CIFilter subclasses.
//

#import <QuartzCore/QuartzCore.h>

@interface DBAccordionFoldTransition : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIImage *inputTargetImage; 
@property (strong, nonatomic) NSNumber *inputBottomHeight; // Distance | Default: 0
@property (strong, nonatomic) NSNumber *inputFoldShadowAmount; // Scalar | Default: 0.1
@property (strong, nonatomic) NSNumber *inputNumberOfFolds; // Scalar | Default: 3
@property (strong, nonatomic) NSNumber *inputTime; // Time | Default: 0

@end


@interface DBAdditionCompositing : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputBackgroundImage; 
@property (strong, nonatomic) CIImage *inputImage; 

@end


@interface DBAffineClamp : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) NSAffineTransform *inputTransform; // | Default: [{0.4000, 0.0000, 0.0000, 0.4000}, 0.0000, 0.0000]

@end


@interface DBAffineTile : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) NSAffineTransform *inputTransform; // | Default: [{0.4000, 0.0000, 0.0000, 0.4000}, 0.0000, 0.0000]

@end


@interface DBAffineTransform : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) NSAffineTransform *inputTransform; // | Default: [{1.0000, 0.0000, 0.0000, 1.0000}, 0.0000, 0.0000]

@end


@interface DBAreaAverage : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIVector *inputExtent; // Rectangle | Default: [0 0 640 80]

@end


@interface DBAreaHistogram : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIVector *inputExtent; // Rectangle | Default: [0 0 640 80]
@property (strong, nonatomic) NSNumber *inputCount; // Scalar | Default: 64
@property (strong, nonatomic) NSNumber *inputScale; // Scalar | Default: 1

@end


@interface DBAreaMaximum : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIVector *inputExtent; // Rectangle | Default: [0 0 640 80]

@end


@interface DBAreaMaximumAlpha : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIVector *inputExtent; // Rectangle | Default: [0 0 640 80]

@end


@interface DBAreaMinimum : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIVector *inputExtent; // Rectangle | Default: [0 0 640 80]

@end


@interface DBAreaMinimumAlpha : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIVector *inputExtent; // Rectangle | Default: [0 0 640 80]

@end


@interface DBAztecCodeGenerator : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) NSData *inputMessage; 
@property (strong, nonatomic) NSNumber *inputCompactStyle; 
@property (strong, nonatomic) NSNumber *inputCorrectionLevel; // | Default: 23
@property (strong, nonatomic) NSNumber *inputLayers; 

@end


@interface DBBarsSwipeTransition : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIImage *inputTargetImage; 
@property (strong, nonatomic) NSNumber *inputAngle; // Angle | Default: 3.141592653589793
@property (strong, nonatomic) NSNumber *inputBarOffset; // Scalar | Default: 10
@property (strong, nonatomic) NSNumber *inputTime; // Time | Default: 0
@property (strong, nonatomic) NSNumber *inputWidth; // Distance | Default: 30

@end


@interface DBBlendWithAlphaMask : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputBackgroundImage; 
@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIImage *inputMaskImage; 

@end


@interface DBBlendWithMask : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputBackgroundImage; 
@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIImage *inputMaskImage; 

@end


@interface DBBloom : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) NSNumber *inputIntensity; // Scalar | Default: 1
@property (strong, nonatomic) NSNumber *inputRadius; // Distance | Default: 10

@end


@interface DBBoxBlur : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) NSNumber *inputRadius; // Distance | Default: 10

@end


@interface DBBumpDistortion : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputRadius; // Distance | Default: 300
@property (strong, nonatomic) NSNumber *inputScale; // Scalar | Default: 0.5

@end


@interface DBBumpDistortionLinear : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputAngle; // Angle | Default: 0
@property (strong, nonatomic) NSNumber *inputRadius; // Distance | Default: 300
@property (strong, nonatomic) NSNumber *inputScale; // Scalar | Default: 0.5

@end


@interface DBCMYKHalftone : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputAngle; // Angle | Default: 0
@property (strong, nonatomic) NSNumber *inputGCR; // Scalar | Default: 1
@property (strong, nonatomic) NSNumber *inputSharpness; // Distance | Default: 0.7
@property (strong, nonatomic) NSNumber *inputUCR; // Scalar | Default: 0.5
@property (strong, nonatomic) NSNumber *inputWidth; // Distance | Default: 6

@end


@interface DBCheckerboardGenerator : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIColor *inputColor0; // | Default: (1 1 1 1)
@property (strong, nonatomic) CIColor *inputColor1; // | Default: (0 0 0 1)
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputSharpness; // Scalar | Default: 1
@property (strong, nonatomic) NSNumber *inputWidth; // Distance | Default: 80

@end


@interface DBCircleSplashDistortion : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputRadius; // Distance | Default: 150

@end


@interface DBCircularScreen : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputSharpness; // Scalar | Default: 0.7
@property (strong, nonatomic) NSNumber *inputWidth; // Distance | Default: 6

@end


@interface DBCircularWrap : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputAngle; // Angle | Default: 0
@property (strong, nonatomic) NSNumber *inputRadius; // Distance | Default: 150

@end


@interface DBCode128BarcodeGenerator : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) NSData *inputMessage; 
@property (strong, nonatomic) NSNumber *inputQuietSpace; // Scalar | Default: 7

@end


@interface DBColorBlendMode : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputBackgroundImage; 
@property (strong, nonatomic) CIImage *inputImage; 

@end


@interface DBColorBurnBlendMode : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputBackgroundImage; 
@property (strong, nonatomic) CIImage *inputImage; 

@end


@interface DBColorClamp : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIVector *inputMaxComponents; // Rectangle | Default: [1 1 1 1]
@property (strong, nonatomic) CIVector *inputMinComponents; // Rectangle | Default: [0 0 0 0]

@end


@interface DBColorControls : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) NSNumber *inputBrightness; // Scalar | Default: 0
@property (strong, nonatomic) NSNumber *inputContrast; // Scalar | Default: 1
@property (strong, nonatomic) NSNumber *inputSaturation; // Scalar | Default: 1

@end


@interface DBColorCrossPolynomial : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIVector *inputBlueCoefficients; 
@property (strong, nonatomic) CIVector *inputGreenCoefficients; 
@property (strong, nonatomic) CIVector *inputRedCoefficients; 

@end


@interface DBColorCube : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) NSData *inputCubeData; 
@property (strong, nonatomic) NSNumber *inputCubeDimension; // Count | Default: 2

@end


@interface DBColorCubeWithColorSpace : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) NSData *inputCubeData; 
@property (strong, nonatomic) NSNumber *inputCubeDimension; // Count | Default: 2
@property (strong, nonatomic) NSObject *inputColorSpace; 

@end


@interface DBColorDodgeBlendMode : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputBackgroundImage; 
@property (strong, nonatomic) CIImage *inputImage; 

@end


@interface DBColorInvert : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 

@end


@interface DBColorMap : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputGradientImage; // Gradient 
@property (strong, nonatomic) CIImage *inputImage; 

@end


@interface DBColorMatrix : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIVector *inputAVector; // | Default: [0 0 0 1]
@property (strong, nonatomic) CIVector *inputBVector; // | Default: [0 0 1 0]
@property (strong, nonatomic) CIVector *inputBiasVector; // | Default: [0 0 0 0]
@property (strong, nonatomic) CIVector *inputGVector; // | Default: [0 1 0 0]
@property (strong, nonatomic) CIVector *inputRVector; // | Default: [1 0 0 0]

@end


@interface DBColorMonochrome : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIColor *inputColor; // OpaqueColor | Default: (0.6 0.45 0.3 1)
@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) NSNumber *inputIntensity; // Scalar | Default: 1

@end


@interface DBColorPolynomial : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIVector *inputAlphaCoefficients; // Rectangle | Default: [0 1 0 0]
@property (strong, nonatomic) CIVector *inputBlueCoefficients; // Rectangle | Default: [0 1 0 0]
@property (strong, nonatomic) CIVector *inputGreenCoefficients; // Rectangle | Default: [0 1 0 0]
@property (strong, nonatomic) CIVector *inputRedCoefficients; // Rectangle | Default: [0 1 0 0]

@end


@interface DBColorPosterize : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) NSNumber *inputLevels; // Scalar | Default: 6

@end


@interface DBColumnAverage : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIVector *inputExtent; // Rectangle | Default: [0 0 640 80]

@end


@interface DBComicEffect : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 

@end


@interface DBConstantColorGenerator : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIColor *inputColor; // | Default: (1 0 0 1)

@end


@interface DBConvolution3X3 : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIVector *inputWeights; // | Default: [0 0 0 0 1 0 0 0 0]
@property (strong, nonatomic) NSNumber *inputBias; // Distance | Default: 0

@end


@interface DBConvolution5X5 : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIVector *inputWeights; // | Default: [0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0]
@property (strong, nonatomic) NSNumber *inputBias; // Distance | Default: 0

@end


@interface DBConvolution7X7 : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIVector *inputWeights; // | Default: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0]
@property (strong, nonatomic) NSNumber *inputBias; // Distance | Default: 0

@end


@interface DBConvolution9Horizontal : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIVector *inputWeights; // | Default: [0 0 0 0 1 0 0 0 0]
@property (strong, nonatomic) NSNumber *inputBias; // Distance | Default: 0

@end


@interface DBConvolution9Vertical : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIVector *inputWeights; // | Default: [0 0 0 0 1 0 0 0 0]
@property (strong, nonatomic) NSNumber *inputBias; // Distance | Default: 0

@end


@interface DBCopyMachineTransition : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIColor *inputColor; // OpaqueColor | Default: (0.6 1 0.8 1)
@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIImage *inputTargetImage; 
@property (strong, nonatomic) CIVector *inputExtent; // Rectangle | Default: [0 0 300 300]
@property (strong, nonatomic) NSNumber *inputAngle; // Angle | Default: 0
@property (strong, nonatomic) NSNumber *inputOpacity; // Scalar | Default: 1.3
@property (strong, nonatomic) NSNumber *inputTime; // Time | Default: 0
@property (strong, nonatomic) NSNumber *inputWidth; // Distance | Default: 200

@end


@interface DBCrop : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIVector *inputRectangle; // Rectangle | Default: [0 0 300 300]

@end


@interface DBCrystallize : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputRadius; // Distance | Default: 20

@end


@interface DBDarkenBlendMode : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputBackgroundImage; 
@property (strong, nonatomic) CIImage *inputImage; 

@end


@interface DBDepthOfField : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIVector *inputPoint0; // Position | Default: [0 300]
@property (strong, nonatomic) CIVector *inputPoint1; // Position | Default: [300 300]
@property (strong, nonatomic) NSNumber *inputRadius; // Scalar | Default: 6
@property (strong, nonatomic) NSNumber *inputSaturation; // Scalar | Default: 1.5
@property (strong, nonatomic) NSNumber *inputUnsharpMaskIntensity; // Scalar | Default: 0.5
@property (strong, nonatomic) NSNumber *inputUnsharpMaskRadius; // Scalar | Default: 2.5

@end


@interface DBDifferenceBlendMode : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputBackgroundImage; 
@property (strong, nonatomic) CIImage *inputImage; 

@end


@interface DBDiscBlur : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) NSNumber *inputRadius; // Distance | Default: 8

@end


@interface DBDisintegrateWithMaskTransition : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIImage *inputMaskImage; 
@property (strong, nonatomic) CIImage *inputTargetImage; 
@property (strong, nonatomic) CIVector *inputShadowOffset; // Offset | Default: [0 -10]
@property (strong, nonatomic) NSNumber *inputShadowDensity; // Scalar | Default: 0.65
@property (strong, nonatomic) NSNumber *inputShadowRadius; // Distance | Default: 8
@property (strong, nonatomic) NSNumber *inputTime; // Time | Default: 0

@end


@interface DBDisplacementDistortion : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputDisplacementImage; 
@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) NSNumber *inputScale; // Distance | Default: 50

@end


@interface DBDissolveTransition : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIImage *inputTargetImage; 
@property (strong, nonatomic) NSNumber *inputTime; // Time | Default: 0

@end


@interface DBDivideBlendMode : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputBackgroundImage; 
@property (strong, nonatomic) CIImage *inputImage; 

@end


@interface DBDotScreen : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputAngle; // Angle | Default: 0
@property (strong, nonatomic) NSNumber *inputSharpness; // Scalar | Default: 0.7
@property (strong, nonatomic) NSNumber *inputWidth; // Distance | Default: 6

@end


@interface DBDroste : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIVector *inputInsetPoint0; // Position | Default: [200 200]
@property (strong, nonatomic) CIVector *inputInsetPoint1; // Position | Default: [400 400]
@property (strong, nonatomic) NSNumber *inputPeriodicity; // Distance | Default: 1
@property (strong, nonatomic) NSNumber *inputRotation; // Distance | Default: 0
@property (strong, nonatomic) NSNumber *inputStrands; // Distance | Default: 1
@property (strong, nonatomic) NSNumber *inputZoom; // Scalar | Default: 1

@end


@interface DBEdgeWork : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) NSNumber *inputRadius; // Distance | Default: 3

@end


@interface DBEdges : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) NSNumber *inputIntensity; // Scalar | Default: 1

@end


@interface DBEightfoldReflectedTile : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputAngle; // Angle | Default: 0
@property (strong, nonatomic) NSNumber *inputWidth; // Distance | Default: 100

@end


@interface DBExclusionBlendMode : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputBackgroundImage; 
@property (strong, nonatomic) CIImage *inputImage; 

@end


@interface DBExposureAdjust : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) NSNumber *inputEV; // Scalar | Default: 0.5

@end


@interface DBFalseColor : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIColor *inputColor0; // | Default: (0.3 0 0 1)
@property (strong, nonatomic) CIColor *inputColor1; // | Default: (1 0.9 0.8 1)
@property (strong, nonatomic) CIImage *inputImage; 

@end


@interface DBFlashTransition : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIColor *inputColor; // OpaqueColor | Default: (1 0.8 0.6 1)
@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIImage *inputTargetImage; 
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) CIVector *inputExtent; // Rectangle | Default: [0 0 300 300]
@property (strong, nonatomic) NSNumber *inputFadeThreshold; // Scalar | Default: 0.85
@property (strong, nonatomic) NSNumber *inputMaxStriationRadius; // Scalar | Default: 2.58
@property (strong, nonatomic) NSNumber *inputStriationContrast; // Scalar | Default: 1.375
@property (strong, nonatomic) NSNumber *inputStriationStrength; // Scalar | Default: 0.5
@property (strong, nonatomic) NSNumber *inputTime; // Time | Default: 0

@end


@interface DBFourfoldReflectedTile : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputAcuteAngle; // Angle | Default: 1.570796326794897
@property (strong, nonatomic) NSNumber *inputAngle; // Angle | Default: 0
@property (strong, nonatomic) NSNumber *inputWidth; // Distance | Default: 100

@end


@interface DBFourfoldRotatedTile : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputAngle; // Angle | Default: 0
@property (strong, nonatomic) NSNumber *inputWidth; // Distance | Default: 100

@end


@interface DBFourfoldTranslatedTile : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputAcuteAngle; // Angle | Default: 1.570796326794897
@property (strong, nonatomic) NSNumber *inputAngle; // Angle | Default: 0
@property (strong, nonatomic) NSNumber *inputWidth; // Distance | Default: 100

@end


@interface DBGammaAdjust : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) NSNumber *inputPower; // Scalar | Default: 0.75

@end


@interface DBGaussianBlur : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) NSNumber *inputRadius; // Distance | Default: 10

@end


@interface DBGaussianGradient : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIColor *inputColor0; // | Default: (1 1 1 1)
@property (strong, nonatomic) CIColor *inputColor1; // | Default: (0 0 0 0)
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputRadius; // Distance | Default: 300

@end


@interface DBGlassDistortion : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIImage *inputTexture; 
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputScale; // Distance | Default: 200

@end


@interface DBGlassLozenge : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIVector *inputPoint0; // Position | Default: [150 150]
@property (strong, nonatomic) CIVector *inputPoint1; // Position | Default: [350 150]
@property (strong, nonatomic) NSNumber *inputRadius; // Distance | Default: 100
@property (strong, nonatomic) NSNumber *inputRefraction; // Scalar | Default: 1.7

@end


@interface DBGlideReflectedTile : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputAngle; // Angle | Default: 0
@property (strong, nonatomic) NSNumber *inputWidth; // Distance | Default: 100

@end


@interface DBGloom : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) NSNumber *inputIntensity; // Scalar | Default: 1
@property (strong, nonatomic) NSNumber *inputRadius; // Distance | Default: 10

@end


@interface DBHardLightBlendMode : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputBackgroundImage; 
@property (strong, nonatomic) CIImage *inputImage; 

@end


@interface DBHatchedScreen : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputAngle; // Angle | Default: 0
@property (strong, nonatomic) NSNumber *inputSharpness; // Scalar | Default: 0.7
@property (strong, nonatomic) NSNumber *inputWidth; // Distance | Default: 6

@end


@interface DBHeightFieldFromMask : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) NSNumber *inputRadius; // Distance | Default: 10

@end


@interface DBHexagonalPixellate : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputScale; // Distance | Default: 8

@end


@interface DBHighlightShadowAdjust : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) NSNumber *inputHighlightAmount; // Scalar | Default: 1
@property (strong, nonatomic) NSNumber *inputRadius; // Scalar | Default: 0
@property (strong, nonatomic) NSNumber *inputShadowAmount; // Scalar | Default: 0

@end


@interface DBHistogramDisplayFilter : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) NSNumber *inputHeight; // Scalar | Default: 100
@property (strong, nonatomic) NSNumber *inputHighLimit; // Scalar | Default: 1
@property (strong, nonatomic) NSNumber *inputLowLimit; // Scalar | Default: 0

@end


@interface DBHoleDistortion : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputRadius; // Distance | Default: 150

@end


@interface DBHueAdjust : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) NSNumber *inputAngle; // Angle | Default: 0

@end


@interface DBHueBlendMode : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputBackgroundImage; 
@property (strong, nonatomic) CIImage *inputImage; 

@end


@interface DBKaleidoscope : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputAngle; // Angle | Default: 0
@property (strong, nonatomic) NSNumber *inputCount; // Scalar | Default: 6

@end


@interface DBLanczosScaleTransform : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) NSNumber *inputAspectRatio; // Scalar | Default: 1
@property (strong, nonatomic) NSNumber *inputScale; // Scalar | Default: 1

@end


@interface DBLenticularHaloGenerator : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIColor *inputColor; // | Default: (1 0.9 0.8 1)
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputHaloOverlap; // Scalar | Default: 0.77
@property (strong, nonatomic) NSNumber *inputHaloRadius; // Distance | Default: 70
@property (strong, nonatomic) NSNumber *inputHaloWidth; // Distance | Default: 87
@property (strong, nonatomic) NSNumber *inputStriationContrast; // Scalar | Default: 1
@property (strong, nonatomic) NSNumber *inputStriationStrength; // Scalar | Default: 0.5
@property (strong, nonatomic) NSNumber *inputTime; // Scalar | Default: 0

@end


@interface DBLightenBlendMode : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputBackgroundImage; 
@property (strong, nonatomic) CIImage *inputImage; 

@end


@interface DBLineOverlay : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) NSNumber *inputContrast; // Scalar | Default: 50
@property (strong, nonatomic) NSNumber *inputEdgeIntensity; // Scalar | Default: 1
@property (strong, nonatomic) NSNumber *inputNRNoiseLevel; // Scalar | Default: 0.07000000000000001
@property (strong, nonatomic) NSNumber *inputNRSharpness; // Scalar | Default: 0.71
@property (strong, nonatomic) NSNumber *inputThreshold; // Scalar | Default: 0.1

@end


@interface DBLineScreen : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputAngle; // Angle | Default: 0
@property (strong, nonatomic) NSNumber *inputSharpness; // Scalar | Default: 0.7
@property (strong, nonatomic) NSNumber *inputWidth; // Distance | Default: 6

@end


@interface DBLinearBurnBlendMode : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputBackgroundImage; 
@property (strong, nonatomic) CIImage *inputImage; 

@end


@interface DBLinearDodgeBlendMode : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputBackgroundImage; 
@property (strong, nonatomic) CIImage *inputImage; 

@end


@interface DBLinearGradient : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIColor *inputColor0; // | Default: (1 1 1 1)
@property (strong, nonatomic) CIColor *inputColor1; // | Default: (0 0 0 1)
@property (strong, nonatomic) CIVector *inputPoint0; // Position | Default: [0 0]
@property (strong, nonatomic) CIVector *inputPoint1; // Position | Default: [200 200]

@end


@interface DBLinearToSRGBToneCurve : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 

@end


@interface DBLuminosityBlendMode : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputBackgroundImage; 
@property (strong, nonatomic) CIImage *inputImage; 

@end


@interface DBMaskToAlpha : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 

@end


@interface DBMaskedVariableBlur : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIImage *inputMask; 
@property (strong, nonatomic) NSNumber *inputRadius; // Distance | Default: 10

@end


@interface DBMaximumComponent : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 

@end


@interface DBMaximumCompositing : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputBackgroundImage; 
@property (strong, nonatomic) CIImage *inputImage; 

@end


@interface DBMedianFilter : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 

@end


@interface DBMinimumComponent : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 

@end


@interface DBMinimumCompositing : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputBackgroundImage; 
@property (strong, nonatomic) CIImage *inputImage; 

@end


@interface DBModTransition : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIImage *inputTargetImage; 
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputAngle; // Angle | Default: 2
@property (strong, nonatomic) NSNumber *inputCompression; // Distance | Default: 300
@property (strong, nonatomic) NSNumber *inputRadius; // Distance | Default: 150
@property (strong, nonatomic) NSNumber *inputTime; // Time | Default: 0

@end


@interface DBMotionBlur : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) NSNumber *inputAngle; // Angle | Default: 0
@property (strong, nonatomic) NSNumber *inputRadius; // Distance | Default: 20

@end


@interface DBMultiplyBlendMode : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputBackgroundImage; 
@property (strong, nonatomic) CIImage *inputImage; 

@end


@interface DBMultiplyCompositing : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputBackgroundImage; 
@property (strong, nonatomic) CIImage *inputImage; 

@end


@interface DBNoiseReduction : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) NSNumber *inputNoiseLevel; // Scalar | Default: 0.02
@property (strong, nonatomic) NSNumber *inputSharpness; // Scalar | Default: 0.4

@end


@interface DBOpTile : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputAngle; // Angle | Default: 0
@property (strong, nonatomic) NSNumber *inputScale; // Scalar | Default: 2.8
@property (strong, nonatomic) NSNumber *inputWidth; // Distance | Default: 65

@end


@interface DBOverlayBlendMode : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputBackgroundImage; 
@property (strong, nonatomic) CIImage *inputImage; 

@end


@interface DBPageCurlTransition : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputBacksideImage; 
@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIImage *inputShadingImage; 
@property (strong, nonatomic) CIImage *inputTargetImage; 
@property (strong, nonatomic) CIVector *inputExtent; // Rectangle | Default: [0 0 300 300]
@property (strong, nonatomic) NSNumber *inputAngle; // Angle | Default: 0
@property (strong, nonatomic) NSNumber *inputRadius; // Distance | Default: 100
@property (strong, nonatomic) NSNumber *inputTime; // Time | Default: 0

@end


@interface DBPageCurlWithShadowTransition : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputBacksideImage; 
@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIImage *inputTargetImage; 
@property (strong, nonatomic) CIVector *inputExtent; // Rectangle | Default: [0 0 0 0]
@property (strong, nonatomic) CIVector *inputShadowExtent; // Rectangle | Default: [0 0 0 0]
@property (strong, nonatomic) NSNumber *inputAngle; // Angle | Default: 0
@property (strong, nonatomic) NSNumber *inputRadius; // Distance | Default: 100
@property (strong, nonatomic) NSNumber *inputShadowAmount; // Distance | Default: 0.7
@property (strong, nonatomic) NSNumber *inputShadowSize; // Distance | Default: 0.5
@property (strong, nonatomic) NSNumber *inputTime; // Time | Default: 0

@end


@interface DBParallelogramTile : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputAcuteAngle; // Angle | Default: 1.570796326794897
@property (strong, nonatomic) NSNumber *inputAngle; // Angle | Default: 0
@property (strong, nonatomic) NSNumber *inputWidth; // Distance | Default: 100

@end


@interface DBPerspectiveCorrection : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIVector *inputBottomLeft; // Position | Default: [155 153]
@property (strong, nonatomic) CIVector *inputBottomRight; // Position | Default: [548 140]
@property (strong, nonatomic) CIVector *inputTopLeft; // Position | Default: [118 484]
@property (strong, nonatomic) CIVector *inputTopRight; // Position | Default: [646 507]

@end


@interface DBPerspectiveTile : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIVector *inputBottomLeft; // Position | Default: [155 153]
@property (strong, nonatomic) CIVector *inputBottomRight; // Position | Default: [548 140]
@property (strong, nonatomic) CIVector *inputTopLeft; // Position | Default: [118 484]
@property (strong, nonatomic) CIVector *inputTopRight; // Position | Default: [646 507]

@end


@interface DBPerspectiveTransform : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIVector *inputBottomLeft; // Position | Default: [155 153]
@property (strong, nonatomic) CIVector *inputBottomRight; // Position | Default: [548 140]
@property (strong, nonatomic) CIVector *inputTopLeft; // Position | Default: [118 484]
@property (strong, nonatomic) CIVector *inputTopRight; // Position | Default: [646 507]

@end


@interface DBPhotoEffectChrome : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 

@end


@interface DBPhotoEffectFade : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 

@end


@interface DBPhotoEffectInstant : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 

@end


@interface DBPhotoEffectMono : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 

@end


@interface DBPhotoEffectNoir : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 

@end


@interface DBPhotoEffectProcess : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 

@end


@interface DBPhotoEffectTonal : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 

@end


@interface DBPhotoEffectTransfer : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 

@end


@interface DBPinLightBlendMode : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputBackgroundImage; 
@property (strong, nonatomic) CIImage *inputImage; 

@end


@interface DBPinchDistortion : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputRadius; // Distance | Default: 300
@property (strong, nonatomic) NSNumber *inputScale; // Scalar | Default: 0.5

@end


@interface DBPixellate : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputScale; // Distance | Default: 8

@end


@interface DBPointillize : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputRadius; // Distance | Default: 20

@end


@interface DBQRCodeGenerator : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) NSData *inputMessage; 
@property (strong, nonatomic) NSString *inputCorrectionLevel; // | Default: M

@end


@interface DBRadialGradient : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIColor *inputColor0; // | Default: (1 1 1 1)
@property (strong, nonatomic) CIColor *inputColor1; // | Default: (0 0 0 1)
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputRadius0; // Distance | Default: 5
@property (strong, nonatomic) NSNumber *inputRadius1; // Distance | Default: 100

@end


@interface DBRandomGenerator : CIFilter

+ (instancetype)filter;


@end


@interface DBRippleTransition : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIImage *inputShadingImage; 
@property (strong, nonatomic) CIImage *inputTargetImage; 
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) CIVector *inputExtent; // Rectangle | Default: [0 0 300 300]
@property (strong, nonatomic) NSNumber *inputScale; // Scalar | Default: 50
@property (strong, nonatomic) NSNumber *inputTime; // Time | Default: 0
@property (strong, nonatomic) NSNumber *inputWidth; // Distance | Default: 100

@end


@interface DBRowAverage : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIVector *inputExtent; // Rectangle | Default: [0 0 640 80]

@end


@interface DBSRGBToneCurveToLinear : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 

@end


@interface DBSaturationBlendMode : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputBackgroundImage; 
@property (strong, nonatomic) CIImage *inputImage; 

@end


@interface DBScreenBlendMode : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputBackgroundImage; 
@property (strong, nonatomic) CIImage *inputImage; 

@end


@interface DBSepiaTone : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) NSNumber *inputIntensity; // Scalar | Default: 1

@end


@interface DBShadedMaterial : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIImage *inputShadingImage; 
@property (strong, nonatomic) NSNumber *inputScale; // Distance | Default: 10

@end


@interface DBSharpenLuminance : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) NSNumber *inputSharpness; // Scalar | Default: 0.4

@end


@interface DBSixfoldReflectedTile : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputAngle; // Angle | Default: 0
@property (strong, nonatomic) NSNumber *inputWidth; // Distance | Default: 100

@end


@interface DBSixfoldRotatedTile : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputAngle; // Angle | Default: 0
@property (strong, nonatomic) NSNumber *inputWidth; // Distance | Default: 100

@end


@interface DBSoftLightBlendMode : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputBackgroundImage; 
@property (strong, nonatomic) CIImage *inputImage; 

@end


@interface DBSourceAtopCompositing : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputBackgroundImage; 
@property (strong, nonatomic) CIImage *inputImage; 

@end


@interface DBSourceInCompositing : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputBackgroundImage; 
@property (strong, nonatomic) CIImage *inputImage; 

@end


@interface DBSourceOutCompositing : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputBackgroundImage; 
@property (strong, nonatomic) CIImage *inputImage; 

@end


@interface DBSourceOverCompositing : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputBackgroundImage; 
@property (strong, nonatomic) CIImage *inputImage; 

@end


@interface DBSpotColor : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIColor *inputCenterColor1; // | Default: (0.0784 0.0627 0.0706 1)
@property (strong, nonatomic) CIColor *inputCenterColor2; // | Default: (0.5255 0.3059 0.3451 1)
@property (strong, nonatomic) CIColor *inputCenterColor3; // | Default: (0.9216 0.4549 0.3333 1)
@property (strong, nonatomic) CIColor *inputReplacementColor1; // | Default: (0.4392 0.1922 0.1961 1)
@property (strong, nonatomic) CIColor *inputReplacementColor2; // | Default: (0.9137 0.5608 0.5059 1)
@property (strong, nonatomic) CIColor *inputReplacementColor3; // | Default: (0.9098 0.7529 0.6078 1)
@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) NSNumber *inputCloseness1; // Scalar | Default: 0.22
@property (strong, nonatomic) NSNumber *inputCloseness2; // Scalar | Default: 0.15
@property (strong, nonatomic) NSNumber *inputCloseness3; // Scalar | Default: 0.5
@property (strong, nonatomic) NSNumber *inputContrast1; // Scalar | Default: 0.98
@property (strong, nonatomic) NSNumber *inputContrast2; // Scalar | Default: 0.98
@property (strong, nonatomic) NSNumber *inputContrast3; // Scalar | Default: 0.99

@end


@interface DBSpotLight : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIColor *inputColor; // OpaqueColor | Default: (1 1 1 1)
@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIVector *inputLightPointsAt; // Position3 | Default: [200 200 0]
@property (strong, nonatomic) CIVector *inputLightPosition; // Position3 | Default: [400 600 150]
@property (strong, nonatomic) NSNumber *inputBrightness; // Distance | Default: 3
@property (strong, nonatomic) NSNumber *inputConcentration; // Scalar | Default: 0.1

@end


@interface DBStarShineGenerator : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIColor *inputColor; // | Default: (1 0.8 0.6 1)
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputCrossAngle; // Angle | Default: 0.6
@property (strong, nonatomic) NSNumber *inputCrossOpacity; // Scalar | Default: -2
@property (strong, nonatomic) NSNumber *inputCrossScale; // Scalar | Default: 15
@property (strong, nonatomic) NSNumber *inputCrossWidth; // Distance | Default: 2.5
@property (strong, nonatomic) NSNumber *inputEpsilon; // Scalar | Default: -2
@property (strong, nonatomic) NSNumber *inputRadius; // Distance | Default: 50

@end


@interface DBStraightenFilter : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) NSNumber *inputAngle; // Angle | Default: 0

@end


@interface DBStretchCrop : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIVector *inputSize; // Position | Default: [1280 720]
@property (strong, nonatomic) NSNumber *inputCenterStretchAmount; // Scalar | Default: 0.25
@property (strong, nonatomic) NSNumber *inputCropAmount; // Scalar | Default: 0.25

@end


@interface DBStripesGenerator : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIColor *inputColor0; // | Default: (1 1 1 1)
@property (strong, nonatomic) CIColor *inputColor1; // | Default: (0 0 0 1)
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputSharpness; // Scalar | Default: 1
@property (strong, nonatomic) NSNumber *inputWidth; // Distance | Default: 80

@end


@interface DBSubtractBlendMode : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputBackgroundImage; 
@property (strong, nonatomic) CIImage *inputImage; 

@end


@interface DBSunbeamsGenerator : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIColor *inputColor; // | Default: (1 0.5 0 1)
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputMaxStriationRadius; // Scalar | Default: 2.58
@property (strong, nonatomic) NSNumber *inputStriationContrast; // Scalar | Default: 1.375
@property (strong, nonatomic) NSNumber *inputStriationStrength; // Scalar | Default: 0.5
@property (strong, nonatomic) NSNumber *inputSunRadius; // Distance | Default: 40
@property (strong, nonatomic) NSNumber *inputTime; // Scalar | Default: 0

@end


@interface DBSwipeTransition : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIColor *inputColor; // OpaqueColor | Default: (1 1 1 1)
@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIImage *inputTargetImage; 
@property (strong, nonatomic) CIVector *inputExtent; // Rectangle | Default: [0 0 300 300]
@property (strong, nonatomic) NSNumber *inputAngle; // Angle | Default: 0
@property (strong, nonatomic) NSNumber *inputOpacity; // Scalar | Default: 0
@property (strong, nonatomic) NSNumber *inputTime; // Time | Default: 0
@property (strong, nonatomic) NSNumber *inputWidth; // Distance | Default: 300

@end


@interface DBTemperatureAndTint : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIVector *inputNeutral; // Offset | Default: [6500 0]
@property (strong, nonatomic) CIVector *inputTargetNeutral; // Offset | Default: [6500 0]

@end


@interface DBToneCurve : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIVector *inputPoint0; // Offset | Default: [0 0]
@property (strong, nonatomic) CIVector *inputPoint1; // Offset | Default: [0.25 0.25]
@property (strong, nonatomic) CIVector *inputPoint2; // Offset | Default: [0.5 0.5]
@property (strong, nonatomic) CIVector *inputPoint3; // Offset | Default: [0.75 0.75]
@property (strong, nonatomic) CIVector *inputPoint4; // Offset | Default: [1 1]

@end


@interface DBTorusLensDistortion : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputRadius; // Distance | Default: 160
@property (strong, nonatomic) NSNumber *inputRefraction; // Scalar | Default: 1.7
@property (strong, nonatomic) NSNumber *inputWidth; // Distance | Default: 80

@end


@interface DBTriangleTile : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputAngle; // Angle | Default: 0
@property (strong, nonatomic) NSNumber *inputWidth; // Distance | Default: 100

@end


@interface DBTwelvefoldReflectedTile : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputAngle; // Angle | Default: 0
@property (strong, nonatomic) NSNumber *inputWidth; // Distance | Default: 100

@end


@interface DBTwirlDistortion : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputAngle; // Angle | Default: 3.141592653589793
@property (strong, nonatomic) NSNumber *inputRadius; // Distance | Default: 300

@end


@interface DBUnsharpMask : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) NSNumber *inputIntensity; // Scalar | Default: 0.5
@property (strong, nonatomic) NSNumber *inputRadius; // Distance | Default: 2.5

@end


@interface DBVibrance : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) NSNumber *inputAmount; // Scalar | Default: 0

@end


@interface DBVignette : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) NSNumber *inputIntensity; // Scalar | Default: 0
@property (strong, nonatomic) NSNumber *inputRadius; // Scalar | Default: 1

@end


@interface DBVignetteEffect : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputFalloff; // Scalar | Default: 0.5
@property (strong, nonatomic) NSNumber *inputIntensity; // Scalar | Default: 1
@property (strong, nonatomic) NSNumber *inputRadius; // Distance | Default: 150

@end


@interface DBVortexDistortion : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputAngle; // Angle | Default: 56.54866776461628
@property (strong, nonatomic) NSNumber *inputRadius; // Distance | Default: 300

@end


@interface DBWhitePointAdjust : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIColor *inputColor; // | Default: (1 0.9 0.8 1)
@property (strong, nonatomic) CIImage *inputImage; 

@end


@interface DBZoomBlur : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; 
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputAmount; // Distance | Default: 20

@end


