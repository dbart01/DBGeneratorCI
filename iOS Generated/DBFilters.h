//
//  DBFilters.m
//
//  Created using DBGeneratorCI, written by Dima Bart on 2014-10-08.
//  Contains 130 CIFilter subclasses.
//

#import <CoreImage/CoreImage.h>

@interface DBAccordionFoldTransition : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) CIImage *inputTargetImage; // Image 
@property (strong, nonatomic) NSNumber *inputBottomHeight; // Distance | Default: 0
@property (strong, nonatomic) NSNumber *inputFoldShadowAmount; // Scalar | Default: 0.1
@property (strong, nonatomic) NSNumber *inputNumberOfFolds; // Scalar | Default: 3
@property (strong, nonatomic) NSNumber *inputTime; // Time | Default: 0

@end


@interface DBAdditionCompositing : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputBackgroundImage; // Image 
@property (strong, nonatomic) CIImage *inputImage; // Image 

@end


@interface DBAffineClamp : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (assign, nonatomic) CGAffineTransform inputTransformT; 
@property (strong, nonatomic) NSValue *inputTransform; // | Default: CGAffineTransform: {{1, 0, 0, 1}, {0, 0}}

@end


@interface DBAffineTile : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (assign, nonatomic) CGAffineTransform inputTransformT; 
@property (strong, nonatomic) NSValue *inputTransform; // | Default: CGAffineTransform: {{1, 0, 0, 1}, {0, 0}}

@end


@interface DBAffineTransform : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (assign, nonatomic) CGAffineTransform inputTransformT; 
@property (strong, nonatomic) NSValue *inputTransform; // Transform | Default: CGAffineTransform: {{1, 0, 0, 1}, {0, 0}}

@end


@interface DBAreaHistogram : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) CIVector *inputExtent; // Rectangle | Default: [0 0 300 300]
@property (strong, nonatomic) NSNumber *inputCount; // Scalar | Default: 64
@property (strong, nonatomic) NSNumber *inputScale; // Scalar | Default: 1

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

@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) CIImage *inputTargetImage; // Image 
@property (strong, nonatomic) NSNumber *inputAngle; // Angle | Default: 3.141592653589793
@property (strong, nonatomic) NSNumber *inputBarOffset; // Scalar | Default: 10
@property (strong, nonatomic) NSNumber *inputTime; // Time | Default: 0
@property (strong, nonatomic) NSNumber *inputWidth; // Distance | Default: 30

@end


@interface DBBlendWithAlphaMask : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputBackgroundImage; // Image 
@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) CIImage *inputMaskImage; // Image 

@end


@interface DBBlendWithMask : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputBackgroundImage; // Image 
@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) CIImage *inputMaskImage; // Image 

@end


@interface DBBloom : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) NSNumber *inputIntensity; // Scalar | Default: 1
@property (strong, nonatomic) NSNumber *inputRadius; // Distance | Default: 10

@end


@interface DBBumpDistortion : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputRadius; // Distance | Default: 300
@property (strong, nonatomic) NSNumber *inputScale; // Scalar | Default: 0.5

@end


@interface DBBumpDistortionLinear : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputAngle; // Angle | Default: 0
@property (strong, nonatomic) NSNumber *inputRadius; // Distance | Default: 300
@property (strong, nonatomic) NSNumber *inputScale; // Scalar | Default: 0.5

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

@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputRadius; // Distance | Default: 150

@end


@interface DBCircularScreen : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputSharpness; // Scalar | Default: 0.7
@property (strong, nonatomic) NSNumber *inputWidth; // Distance | Default: 6

@end


@interface DBCode128BarcodeGenerator : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) NSData *inputMessage; 
@property (strong, nonatomic) NSNumber *inputQuietSpace; // Scalar | Default: 7

@end


@interface DBColorBlendMode : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputBackgroundImage; // Image 
@property (strong, nonatomic) CIImage *inputImage; // Image 

@end


@interface DBColorBurnBlendMode : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputBackgroundImage; // Image 
@property (strong, nonatomic) CIImage *inputImage; // Image 

@end


@interface DBColorClamp : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) CIVector *inputMaxComponents; // | Default: [1 1 1 1]
@property (strong, nonatomic) CIVector *inputMinComponents; // | Default: [0 0 0 0]

@end


@interface DBColorControls : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) NSNumber *inputBrightness; // Scalar | Default: 0
@property (strong, nonatomic) NSNumber *inputContrast; // Scalar | Default: 1
@property (strong, nonatomic) NSNumber *inputSaturation; // Scalar | Default: 1

@end


@interface DBColorCrossPolynomial : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) CIVector *inputBlueCoefficients; // | Default: [0 0 1 0 0 0 0 0 0 0]
@property (strong, nonatomic) CIVector *inputCoefficients; 
@property (strong, nonatomic) CIVector *inputGreenCoefficients; // | Default: [0 1 0 0 0 0 0 0 0 0]
@property (strong, nonatomic) CIVector *inputRedCoefficients; // | Default: [1 0 0 0 0 0 0 0 0 0]

@end


@interface DBColorCube : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) NSData *inputCubeData; 
@property (strong, nonatomic) NSNumber *inputCubeDimension; // Count | Default: 2

@end


@interface DBColorCubeWithColorSpace : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) NSData *inputCubeData; 
@property (strong, nonatomic) NSNumber *inputCubeDimension; // Count | Default: 2
@property (strong, nonatomic) NSObject *inputColorSpace; 

@end


@interface DBColorDodgeBlendMode : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputBackgroundImage; // Image 
@property (strong, nonatomic) CIImage *inputImage; // Image 

@end


@interface DBColorInvert : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 

@end


@interface DBColorMap : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputGradientImage; // Image 
@property (strong, nonatomic) CIImage *inputImage; // Image 

@end


@interface DBColorMatrix : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) CIVector *inputAVector; // | Default: [0 0 0 1]
@property (strong, nonatomic) CIVector *inputBVector; // | Default: [0 0 1 0]
@property (strong, nonatomic) CIVector *inputBiasVector; // | Default: [0 0 0 0]
@property (strong, nonatomic) CIVector *inputGVector; // | Default: [0 1 0 0]
@property (strong, nonatomic) CIVector *inputRVector; // | Default: [1 0 0 0]

@end


@interface DBColorMonochrome : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIColor *inputColor; // Color | Default: (0.6 0.45 0.3 1)
@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) NSNumber *inputIntensity; // Scalar | Default: 1

@end


@interface DBColorPolynomial : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) CIVector *inputAlphaCoefficients; // | Default: [0 1 0 0]
@property (strong, nonatomic) CIVector *inputBlueCoefficients; // | Default: [0 1 0 0]
@property (strong, nonatomic) CIVector *inputGreenCoefficients; // | Default: [0 1 0 0]
@property (strong, nonatomic) CIVector *inputRedCoefficients; // | Default: [0 1 0 0]

@end


@interface DBColorPosterize : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) NSNumber *inputLevels; // Scalar | Default: 6

@end


@interface DBConstantColorGenerator : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIColor *inputColor; // Color | Default: (1 0 0 1)

@end


@interface DBConvolution3X3 : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) CIVector *inputWeights; // | Default: [0 0 0 0 1 0 0 0 0]
@property (strong, nonatomic) NSNumber *inputBias; // | Default: 0

@end


@interface DBConvolution5X5 : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) CIVector *inputWeights; // | Default: [0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0]
@property (strong, nonatomic) NSNumber *inputBias; // | Default: 0

@end


@interface DBConvolution9Horizontal : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) CIVector *inputWeights; // | Default: [0 0 0 0 1 0 0 0 0]
@property (strong, nonatomic) NSNumber *inputBias; // | Default: 0

@end


@interface DBConvolution9Vertical : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) CIVector *inputWeights; // | Default: [0 0 0 0 1 0 0 0 0]
@property (strong, nonatomic) NSNumber *inputBias; // | Default: 0

@end


@interface DBCopyMachineTransition : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIColor *inputColor; // Color | Default: (0.6 1 0.8 1)
@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) CIImage *inputTargetImage; // Image 
@property (strong, nonatomic) CIVector *inputExtent; // Rectangle | Default: [0 0 300 300]
@property (strong, nonatomic) NSNumber *inputAngle; // Angle | Default: 0
@property (strong, nonatomic) NSNumber *inputOpacity; // Scalar | Default: 1.3
@property (strong, nonatomic) NSNumber *inputTime; // Time | Default: 0
@property (strong, nonatomic) NSNumber *inputWidth; // Distance | Default: 200

@end


@interface DBCrop : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) CIVector *inputRectangle; // Rectangle | Default: [-8.98847e+307 -8.98847e+307 1.79769e+308 1.79769e+308]

@end


@interface DBDarkenBlendMode : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputBackgroundImage; // Image 
@property (strong, nonatomic) CIImage *inputImage; // Image 

@end


@interface DBDifferenceBlendMode : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputBackgroundImage; // Image 
@property (strong, nonatomic) CIImage *inputImage; // Image 

@end


@interface DBDisintegrateWithMaskTransition : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) CIImage *inputMaskImage; // Image 
@property (strong, nonatomic) CIImage *inputTargetImage; // Image 
@property (strong, nonatomic) CIVector *inputShadowOffset; // Offset | Default: [0 -10]
@property (strong, nonatomic) NSNumber *inputShadowDensity; // Scalar | Default: 0.65
@property (strong, nonatomic) NSNumber *inputShadowRadius; // Distance | Default: 8
@property (strong, nonatomic) NSNumber *inputTime; // Scalar | Default: 0.5

@end


@interface DBDissolveTransition : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) CIImage *inputTargetImage; // Image 
@property (strong, nonatomic) NSNumber *inputTime; // Time | Default: 0

@end


@interface DBDivideBlendMode : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputBackgroundImage; // Image 
@property (strong, nonatomic) CIImage *inputImage; // Image 

@end


@interface DBDotScreen : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputAngle; // Angle | Default: 0
@property (strong, nonatomic) NSNumber *inputSharpness; // Scalar | Default: 0.7
@property (strong, nonatomic) NSNumber *inputWidth; // Distance | Default: 6

@end


@interface DBEightfoldReflectedTile : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputAngle; // Angle | Default: 0
@property (strong, nonatomic) NSNumber *inputWidth; // Distance | Default: 100

@end


@interface DBExclusionBlendMode : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputBackgroundImage; // Image 
@property (strong, nonatomic) CIImage *inputImage; // Image 

@end


@interface DBExposureAdjust : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) NSNumber *inputEV; // Scalar | Default: 0

@end


@interface DBFalseColor : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIColor *inputColor0; // Color | Default: (0.3 0 0 1)
@property (strong, nonatomic) CIColor *inputColor1; // Color | Default: (1 0.9 0.8 1)
@property (strong, nonatomic) CIImage *inputImage; // Image 

@end


@interface DBFlashTransition : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIColor *inputColor; // Color | Default: (1 0.8 0.6 1)
@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) CIImage *inputTargetImage; // Image 
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

@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputAcuteAngle; // Angle | Default: 1.570796326794897
@property (strong, nonatomic) NSNumber *inputAngle; // Angle | Default: 0
@property (strong, nonatomic) NSNumber *inputWidth; // Distance | Default: 100

@end


@interface DBFourfoldRotatedTile : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputAngle; // Angle | Default: 0
@property (strong, nonatomic) NSNumber *inputWidth; // Distance | Default: 100

@end


@interface DBFourfoldTranslatedTile : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputAcuteAngle; // Angle | Default: 1.570796326794897
@property (strong, nonatomic) NSNumber *inputAngle; // Angle | Default: 0
@property (strong, nonatomic) NSNumber *inputWidth; // Distance | Default: 100

@end


@interface DBGammaAdjust : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) NSNumber *inputPower; // Scalar | Default: 1

@end


@interface DBGaussianBlur : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) NSNumber *inputRadius; // Scalar | Default: 10

@end


@interface DBGaussianGradient : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIColor *inputColor0; // Color | Default: (1 1 1 1)
@property (strong, nonatomic) CIColor *inputColor1; // Color | Default: (0 0 0 0)
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputRadius; // Distance | Default: 300

@end


@interface DBGlassDistortion : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) CIImage *inputTexture; // Image 
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputScale; // Distance | Default: 200

@end


@interface DBGlideReflectedTile : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputAngle; // Angle | Default: 0
@property (strong, nonatomic) NSNumber *inputWidth; // Distance | Default: 100

@end


@interface DBGloom : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) NSNumber *inputIntensity; // Scalar | Default: 1
@property (strong, nonatomic) NSNumber *inputRadius; // Distance | Default: 10

@end


@interface DBHardLightBlendMode : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputBackgroundImage; // Image 
@property (strong, nonatomic) CIImage *inputImage; // Image 

@end


@interface DBHatchedScreen : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputAngle; // Angle | Default: 0
@property (strong, nonatomic) NSNumber *inputSharpness; // Scalar | Default: 0.7
@property (strong, nonatomic) NSNumber *inputWidth; // Distance | Default: 6

@end


@interface DBHighlightShadowAdjust : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) NSNumber *inputHighlightAmount; // Scalar | Default: 1
@property (strong, nonatomic) NSNumber *inputRadius; // Scalar | Default: 0
@property (strong, nonatomic) NSNumber *inputShadowAmount; // Scalar | Default: 0

@end


@interface DBHistogramDisplayFilter : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) NSNumber *inputHeight; // Scalar | Default: 0
@property (strong, nonatomic) NSNumber *inputHighLimit; // Scalar | Default: 1
@property (strong, nonatomic) NSNumber *inputLowLimit; // Scalar | Default: 0

@end


@interface DBHoleDistortion : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputRadius; // Distance | Default: 150

@end


@interface DBHueAdjust : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) NSNumber *inputAngle; // Angle | Default: 0

@end


@interface DBHueBlendMode : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputBackgroundImage; // Image 
@property (strong, nonatomic) CIImage *inputImage; // Image 

@end


@interface DBLanczosScaleTransform : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) NSNumber *inputAspectRatio; // Scalar | Default: 1
@property (strong, nonatomic) NSNumber *inputScale; // Scalar | Default: 1

@end


@interface DBLightTunnel : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputRadius; // Angle | Default: 100
@property (strong, nonatomic) NSNumber *inputRotation; // Angle | Default: 0

@end


@interface DBLightenBlendMode : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputBackgroundImage; // Image 
@property (strong, nonatomic) CIImage *inputImage; // Image 

@end


@interface DBLineScreen : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputAngle; // Angle | Default: 0
@property (strong, nonatomic) NSNumber *inputSharpness; // Scalar | Default: 0.7
@property (strong, nonatomic) NSNumber *inputWidth; // Distance | Default: 6

@end


@interface DBLinearBurnBlendMode : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputBackgroundImage; // Image 
@property (strong, nonatomic) CIImage *inputImage; // Image 

@end


@interface DBLinearDodgeBlendMode : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputBackgroundImage; // Image 
@property (strong, nonatomic) CIImage *inputImage; // Image 

@end


@interface DBLinearGradient : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIColor *inputColor0; // Color | Default: (1 1 1 1)
@property (strong, nonatomic) CIColor *inputColor1; // Color | Default: (0 0 0 1)
@property (strong, nonatomic) CIVector *inputPoint0; // Position | Default: [0 0]
@property (strong, nonatomic) CIVector *inputPoint1; // Position | Default: [200 200]

@end


@interface DBLinearToSRGBToneCurve : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 

@end


@interface DBLuminosityBlendMode : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputBackgroundImage; // Image 
@property (strong, nonatomic) CIImage *inputImage; // Image 

@end


@interface DBMaskToAlpha : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 

@end


@interface DBMaximumComponent : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 

@end


@interface DBMaximumCompositing : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputBackgroundImage; // Image 
@property (strong, nonatomic) CIImage *inputImage; // Image 

@end


@interface DBMinimumComponent : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 

@end


@interface DBMinimumCompositing : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputBackgroundImage; // Image 
@property (strong, nonatomic) CIImage *inputImage; // Image 

@end


@interface DBModTransition : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) CIImage *inputTargetImage; // Image 
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputAngle; // Angle | Default: 2
@property (strong, nonatomic) NSNumber *inputCompression; // Distance | Default: 300
@property (strong, nonatomic) NSNumber *inputRadius; // Distance | Default: 150
@property (strong, nonatomic) NSNumber *inputTime; // Time | Default: 0

@end


@interface DBMultiplyBlendMode : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputBackgroundImage; // Image 
@property (strong, nonatomic) CIImage *inputImage; // Image 

@end


@interface DBMultiplyCompositing : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputBackgroundImage; // Image 
@property (strong, nonatomic) CIImage *inputImage; // Image 

@end


@interface DBOverlayBlendMode : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputBackgroundImage; // Image 
@property (strong, nonatomic) CIImage *inputImage; // Image 

@end


@interface DBPerspectiveCorrection : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) CIVector *inputBottomLeft; // Position | Default: [155 153]
@property (strong, nonatomic) CIVector *inputBottomRight; // Position | Default: [548 140]
@property (strong, nonatomic) CIVector *inputTopLeft; // Position | Default: [118 484]
@property (strong, nonatomic) CIVector *inputTopRight; // Position | Default: [646 507]

@end


@interface DBPerspectiveTile : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) CIVector *inputBottomLeft; // Position | Default: [155 153]
@property (strong, nonatomic) CIVector *inputBottomRight; // Position | Default: [548 140]
@property (strong, nonatomic) CIVector *inputTopLeft; // Position | Default: [118 484]
@property (strong, nonatomic) CIVector *inputTopRight; // Position | Default: [646 507]

@end


@interface DBPerspectiveTransform : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) CIVector *inputBottomLeft; // Position | Default: [155 153]
@property (strong, nonatomic) CIVector *inputBottomRight; // Position | Default: [548 140]
@property (strong, nonatomic) CIVector *inputTopLeft; // Position | Default: [118 484]
@property (strong, nonatomic) CIVector *inputTopRight; // Position | Default: [646 507]

@end


@interface DBPerspectiveTransformWithExtent : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) CIVector *inputBottomLeft; // Position | Default: [155 153]
@property (strong, nonatomic) CIVector *inputBottomRight; // Position | Default: [548 140]
@property (strong, nonatomic) CIVector *inputExtent; // Rectangle | Default: [0 0 300 300]
@property (strong, nonatomic) CIVector *inputTopLeft; // Position | Default: [118 484]
@property (strong, nonatomic) CIVector *inputTopRight; // Position | Default: [646 507]

@end


@interface DBPhotoEffectChrome : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 

@end


@interface DBPhotoEffectFade : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 

@end


@interface DBPhotoEffectInstant : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 

@end


@interface DBPhotoEffectMono : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 

@end


@interface DBPhotoEffectNoir : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 

@end


@interface DBPhotoEffectProcess : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 

@end


@interface DBPhotoEffectTonal : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 

@end


@interface DBPhotoEffectTransfer : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 

@end


@interface DBPinLightBlendMode : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputBackgroundImage; // Image 
@property (strong, nonatomic) CIImage *inputImage; // Image 

@end


@interface DBPinchDistortion : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputRadius; // Distance | Default: 300
@property (strong, nonatomic) NSNumber *inputScale; // Scalar | Default: 0.5

@end


@interface DBPixellate : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputScale; // Distance | Default: 8

@end


@interface DBQRCodeGenerator : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) NSData *inputMessage; 
@property (strong, nonatomic) NSString *inputCorrectionLevel; // | Default: M

@end


@interface DBRadialGradient : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIColor *inputColor0; // Color | Default: (1 1 1 1)
@property (strong, nonatomic) CIColor *inputColor1; // Color | Default: (0 0 0 1)
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputRadius0; // Distance | Default: 5
@property (strong, nonatomic) NSNumber *inputRadius1; // Distance | Default: 100

@end


@interface DBRandomGenerator : CIFilter

+ (instancetype)filter;


@end


@interface DBSRGBToneCurveToLinear : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 

@end


@interface DBSaturationBlendMode : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputBackgroundImage; // Image 
@property (strong, nonatomic) CIImage *inputImage; // Image 

@end


@interface DBScreenBlendMode : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputBackgroundImage; // Image 
@property (strong, nonatomic) CIImage *inputImage; // Image 

@end


@interface DBSepiaTone : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) NSNumber *inputIntensity; // Scalar | Default: 1

@end


@interface DBSharpenLuminance : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) NSNumber *inputSharpness; // Scalar | Default: 0.4

@end


@interface DBSixfoldReflectedTile : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputAngle; // Angle | Default: 0
@property (strong, nonatomic) NSNumber *inputWidth; // Distance | Default: 100

@end


@interface DBSixfoldRotatedTile : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputAngle; // Angle | Default: 0
@property (strong, nonatomic) NSNumber *inputWidth; // Distance | Default: 100

@end


@interface DBSmoothLinearGradient : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIColor *inputColor0; // Color | Default: (1 1 1 1)
@property (strong, nonatomic) CIColor *inputColor1; // Color | Default: (0 0 0 1)
@property (strong, nonatomic) CIVector *inputPoint0; // Position | Default: [0 0]
@property (strong, nonatomic) CIVector *inputPoint1; // Position | Default: [200 200]

@end


@interface DBSoftLightBlendMode : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputBackgroundImage; // Image 
@property (strong, nonatomic) CIImage *inputImage; // Image 

@end


@interface DBSourceAtopCompositing : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputBackgroundImage; // Image 
@property (strong, nonatomic) CIImage *inputImage; // Image 

@end


@interface DBSourceInCompositing : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputBackgroundImage; // Image 
@property (strong, nonatomic) CIImage *inputImage; // Image 

@end


@interface DBSourceOutCompositing : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputBackgroundImage; // Image 
@property (strong, nonatomic) CIImage *inputImage; // Image 

@end


@interface DBSourceOverCompositing : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputBackgroundImage; // Image 
@property (strong, nonatomic) CIImage *inputImage; // Image 

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

@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) NSNumber *inputAngle; // Angle | Default: 0

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

@property (strong, nonatomic) CIImage *inputBackgroundImage; // Image 
@property (strong, nonatomic) CIImage *inputImage; // Image 

@end


@interface DBSwipeTransition : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIColor *inputColor; // Color | Default: (1 1 1 1)
@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) CIImage *inputTargetImage; // Image 
@property (strong, nonatomic) CIVector *inputExtent; // Rectangle | Default: [0 0 300 300]
@property (strong, nonatomic) NSNumber *inputAngle; // Angle | Default: 0
@property (strong, nonatomic) NSNumber *inputOpacity; // Scalar | Default: 0
@property (strong, nonatomic) NSNumber *inputTime; // Time | Default: 0
@property (strong, nonatomic) NSNumber *inputWidth; // Distance | Default: 300

@end


@interface DBTemperatureAndTint : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) CIVector *inputNeutral; // Offset | Default: [6500 0]
@property (strong, nonatomic) CIVector *inputTargetNeutral; // Offset | Default: [6500 0]

@end


@interface DBToneCurve : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) CIVector *inputPoint0; // Offset | Default: [0 0]
@property (strong, nonatomic) CIVector *inputPoint1; // Offset | Default: [0.25 0.25]
@property (strong, nonatomic) CIVector *inputPoint2; // Offset | Default: [0.5 0.5]
@property (strong, nonatomic) CIVector *inputPoint3; // Offset | Default: [0.75 0.75]
@property (strong, nonatomic) CIVector *inputPoint4; // Offset | Default: [1 1]

@end


@interface DBTriangleKaleidoscope : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) CIVector *inputPoint; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputDecay; // Scalar | Default: 0.85
@property (strong, nonatomic) NSNumber *inputRotation; // Angle | Default: 5.924285296593801
@property (strong, nonatomic) NSNumber *inputSize; // Scalar | Default: 700

@end


@interface DBTwelvefoldReflectedTile : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputAngle; // Angle | Default: 0
@property (strong, nonatomic) NSNumber *inputWidth; // Distance | Default: 100

@end


@interface DBTwirlDistortion : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputAngle; // Angle | Default: 3.141592653589793
@property (strong, nonatomic) NSNumber *inputRadius; // Distance | Default: 300

@end


@interface DBUnsharpMask : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) NSNumber *inputIntensity; // Scalar | Default: 0.5
@property (strong, nonatomic) NSNumber *inputRadius; // Distance | Default: 2.5

@end


@interface DBVibrance : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) NSNumber *inputAmount; // Scalar | Default: 0

@end


@interface DBVignette : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) NSNumber *inputIntensity; // Scalar | Default: 0
@property (strong, nonatomic) NSNumber *inputRadius; // Scalar | Default: 1

@end


@interface DBVignetteEffect : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputFalloff; // Scalar | Default: 0.5
@property (strong, nonatomic) NSNumber *inputIntensity; // Scalar | Default: 1
@property (strong, nonatomic) NSNumber *inputRadius; // Distance | Default: 150

@end


@interface DBVortexDistortion : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIImage *inputImage; // Image 
@property (strong, nonatomic) CIVector *inputCenter; // Position | Default: [150 150]
@property (strong, nonatomic) NSNumber *inputAngle; // Angle | Default: 56.54866776461628
@property (strong, nonatomic) NSNumber *inputRadius; // Distance | Default: 300

@end


@interface DBWhitePointAdjust : CIFilter

+ (instancetype)filter;

@property (strong, nonatomic) CIColor *inputColor; // Color | Default: (1 1 1 1)
@property (strong, nonatomic) CIImage *inputImage; // Image 

@end


