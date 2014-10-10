//
//  DBFilters.m
//
//  Created using DBGeneratorCI, written by Dima Bart on 2014-10-08.
//  Contains 130 CIFilter subclasses.
//

#import "DBFilters.h"

@implementation DBAccordionFoldTransition

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIAccordionFoldTransition"];
}

@end


@implementation DBAdditionCompositing

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIAdditionCompositing"];
}

@end


@implementation DBAffineClamp

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIAffineClamp"];
}

- (void)setInputTransformT:(CGAffineTransform)inputTransformT {
    CGAffineTransform t = inputTransformT;
    [self setValue:[NSValue valueWithBytes:&t objCType:@encode(CGAffineTransform)] forKey:@"inputTransformT"];
}

@end


@implementation DBAffineTile

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIAffineTile"];
}

- (void)setInputTransformT:(CGAffineTransform)inputTransformT {
    CGAffineTransform t = inputTransformT;
    [self setValue:[NSValue valueWithBytes:&t objCType:@encode(CGAffineTransform)] forKey:@"inputTransformT"];
}

@end


@implementation DBAffineTransform

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIAffineTransform"];
}

- (void)setInputTransformT:(CGAffineTransform)inputTransformT {
    CGAffineTransform t = inputTransformT;
    [self setValue:[NSValue valueWithBytes:&t objCType:@encode(CGAffineTransform)] forKey:@"inputTransformT"];
}

@end


@implementation DBAreaHistogram

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIAreaHistogram"];
}

@end


@implementation DBAztecCodeGenerator

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIAztecCodeGenerator"];
}

@end


@implementation DBBarsSwipeTransition

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIBarsSwipeTransition"];
}

@end


@implementation DBBlendWithAlphaMask

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIBlendWithAlphaMask"];
}

@end


@implementation DBBlendWithMask

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIBlendWithMask"];
}

@end


@implementation DBBloom

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIBloom"];
}

@end


@implementation DBBumpDistortion

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIBumpDistortion"];
}

@end


@implementation DBBumpDistortionLinear

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIBumpDistortionLinear"];
}

@end


@implementation DBCheckerboardGenerator

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CICheckerboardGenerator"];
}

@end


@implementation DBCircleSplashDistortion

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CICircleSplashDistortion"];
}

@end


@implementation DBCircularScreen

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CICircularScreen"];
}

@end


@implementation DBCode128BarcodeGenerator

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CICode128BarcodeGenerator"];
}

@end


@implementation DBColorBlendMode

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIColorBlendMode"];
}

@end


@implementation DBColorBurnBlendMode

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIColorBurnBlendMode"];
}

@end


@implementation DBColorClamp

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIColorClamp"];
}

@end


@implementation DBColorControls

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIColorControls"];
}

@end


@implementation DBColorCrossPolynomial

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIColorCrossPolynomial"];
}

@end


@implementation DBColorCube

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIColorCube"];
}

@end


@implementation DBColorCubeWithColorSpace

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIColorCubeWithColorSpace"];
}

@end


@implementation DBColorDodgeBlendMode

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIColorDodgeBlendMode"];
}

@end


@implementation DBColorInvert

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIColorInvert"];
}

@end


@implementation DBColorMap

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIColorMap"];
}

@end


@implementation DBColorMatrix

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIColorMatrix"];
}

@end


@implementation DBColorMonochrome

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIColorMonochrome"];
}

@end


@implementation DBColorPolynomial

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIColorPolynomial"];
}

@end


@implementation DBColorPosterize

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIColorPosterize"];
}

@end


@implementation DBConstantColorGenerator

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIConstantColorGenerator"];
}

@end


@implementation DBConvolution3X3

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIConvolution3X3"];
}

@end


@implementation DBConvolution5X5

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIConvolution5X5"];
}

@end


@implementation DBConvolution9Horizontal

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIConvolution9Horizontal"];
}

@end


@implementation DBConvolution9Vertical

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIConvolution9Vertical"];
}

@end


@implementation DBCopyMachineTransition

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CICopyMachineTransition"];
}

@end


@implementation DBCrop

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CICrop"];
}

@end


@implementation DBDarkenBlendMode

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIDarkenBlendMode"];
}

@end


@implementation DBDifferenceBlendMode

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIDifferenceBlendMode"];
}

@end


@implementation DBDisintegrateWithMaskTransition

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIDisintegrateWithMaskTransition"];
}

@end


@implementation DBDissolveTransition

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIDissolveTransition"];
}

@end


@implementation DBDivideBlendMode

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIDivideBlendMode"];
}

@end


@implementation DBDotScreen

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIDotScreen"];
}

@end


@implementation DBEightfoldReflectedTile

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIEightfoldReflectedTile"];
}

@end


@implementation DBExclusionBlendMode

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIExclusionBlendMode"];
}

@end


@implementation DBExposureAdjust

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIExposureAdjust"];
}

@end


@implementation DBFalseColor

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIFalseColor"];
}

@end


@implementation DBFlashTransition

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIFlashTransition"];
}

@end


@implementation DBFourfoldReflectedTile

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIFourfoldReflectedTile"];
}

@end


@implementation DBFourfoldRotatedTile

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIFourfoldRotatedTile"];
}

@end


@implementation DBFourfoldTranslatedTile

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIFourfoldTranslatedTile"];
}

@end


@implementation DBGammaAdjust

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIGammaAdjust"];
}

@end


@implementation DBGaussianBlur

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIGaussianBlur"];
}

@end


@implementation DBGaussianGradient

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIGaussianGradient"];
}

@end


@implementation DBGlassDistortion

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIGlassDistortion"];
}

@end


@implementation DBGlideReflectedTile

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIGlideReflectedTile"];
}

@end


@implementation DBGloom

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIGloom"];
}

@end


@implementation DBHardLightBlendMode

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIHardLightBlendMode"];
}

@end


@implementation DBHatchedScreen

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIHatchedScreen"];
}

@end


@implementation DBHighlightShadowAdjust

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIHighlightShadowAdjust"];
}

@end


@implementation DBHistogramDisplayFilter

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIHistogramDisplayFilter"];
}

@end


@implementation DBHoleDistortion

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIHoleDistortion"];
}

@end


@implementation DBHueAdjust

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIHueAdjust"];
}

@end


@implementation DBHueBlendMode

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIHueBlendMode"];
}

@end


@implementation DBLanczosScaleTransform

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CILanczosScaleTransform"];
}

@end


@implementation DBLightTunnel

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CILightTunnel"];
}

@end


@implementation DBLightenBlendMode

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CILightenBlendMode"];
}

@end


@implementation DBLineScreen

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CILineScreen"];
}

@end


@implementation DBLinearBurnBlendMode

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CILinearBurnBlendMode"];
}

@end


@implementation DBLinearDodgeBlendMode

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CILinearDodgeBlendMode"];
}

@end


@implementation DBLinearGradient

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CILinearGradient"];
}

@end


@implementation DBLinearToSRGBToneCurve

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CILinearToSRGBToneCurve"];
}

@end


@implementation DBLuminosityBlendMode

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CILuminosityBlendMode"];
}

@end


@implementation DBMaskToAlpha

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIMaskToAlpha"];
}

@end


@implementation DBMaximumComponent

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIMaximumComponent"];
}

@end


@implementation DBMaximumCompositing

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIMaximumCompositing"];
}

@end


@implementation DBMinimumComponent

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIMinimumComponent"];
}

@end


@implementation DBMinimumCompositing

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIMinimumCompositing"];
}

@end


@implementation DBModTransition

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIModTransition"];
}

@end


@implementation DBMultiplyBlendMode

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIMultiplyBlendMode"];
}

@end


@implementation DBMultiplyCompositing

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIMultiplyCompositing"];
}

@end


@implementation DBOverlayBlendMode

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIOverlayBlendMode"];
}

@end


@implementation DBPerspectiveCorrection

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIPerspectiveCorrection"];
}

@end


@implementation DBPerspectiveTile

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIPerspectiveTile"];
}

@end


@implementation DBPerspectiveTransform

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIPerspectiveTransform"];
}

@end


@implementation DBPerspectiveTransformWithExtent

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIPerspectiveTransformWithExtent"];
}

@end


@implementation DBPhotoEffectChrome

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIPhotoEffectChrome"];
}

@end


@implementation DBPhotoEffectFade

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIPhotoEffectFade"];
}

@end


@implementation DBPhotoEffectInstant

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIPhotoEffectInstant"];
}

@end


@implementation DBPhotoEffectMono

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIPhotoEffectMono"];
}

@end


@implementation DBPhotoEffectNoir

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIPhotoEffectNoir"];
}

@end


@implementation DBPhotoEffectProcess

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIPhotoEffectProcess"];
}

@end


@implementation DBPhotoEffectTonal

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIPhotoEffectTonal"];
}

@end


@implementation DBPhotoEffectTransfer

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIPhotoEffectTransfer"];
}

@end


@implementation DBPinLightBlendMode

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIPinLightBlendMode"];
}

@end


@implementation DBPinchDistortion

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIPinchDistortion"];
}

@end


@implementation DBPixellate

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIPixellate"];
}

@end


@implementation DBQRCodeGenerator

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIQRCodeGenerator"];
}

@end


@implementation DBRadialGradient

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIRadialGradient"];
}

@end


@implementation DBRandomGenerator

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIRandomGenerator"];
}

@end


@implementation DBSRGBToneCurveToLinear

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CISRGBToneCurveToLinear"];
}

@end


@implementation DBSaturationBlendMode

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CISaturationBlendMode"];
}

@end


@implementation DBScreenBlendMode

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIScreenBlendMode"];
}

@end


@implementation DBSepiaTone

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CISepiaTone"];
}

@end


@implementation DBSharpenLuminance

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CISharpenLuminance"];
}

@end


@implementation DBSixfoldReflectedTile

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CISixfoldReflectedTile"];
}

@end


@implementation DBSixfoldRotatedTile

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CISixfoldRotatedTile"];
}

@end


@implementation DBSmoothLinearGradient

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CISmoothLinearGradient"];
}

@end


@implementation DBSoftLightBlendMode

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CISoftLightBlendMode"];
}

@end


@implementation DBSourceAtopCompositing

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CISourceAtopCompositing"];
}

@end


@implementation DBSourceInCompositing

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CISourceInCompositing"];
}

@end


@implementation DBSourceOutCompositing

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CISourceOutCompositing"];
}

@end


@implementation DBSourceOverCompositing

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CISourceOverCompositing"];
}

@end


@implementation DBStarShineGenerator

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIStarShineGenerator"];
}

@end


@implementation DBStraightenFilter

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIStraightenFilter"];
}

@end


@implementation DBStripesGenerator

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIStripesGenerator"];
}

@end


@implementation DBSubtractBlendMode

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CISubtractBlendMode"];
}

@end


@implementation DBSwipeTransition

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CISwipeTransition"];
}

@end


@implementation DBTemperatureAndTint

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CITemperatureAndTint"];
}

@end


@implementation DBToneCurve

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIToneCurve"];
}

@end


@implementation DBTriangleKaleidoscope

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CITriangleKaleidoscope"];
}

@end


@implementation DBTwelvefoldReflectedTile

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CITwelvefoldReflectedTile"];
}

@end


@implementation DBTwirlDistortion

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CITwirlDistortion"];
}

@end


@implementation DBUnsharpMask

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIUnsharpMask"];
}

@end


@implementation DBVibrance

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIVibrance"];
}

@end


@implementation DBVignette

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIVignette"];
}

@end


@implementation DBVignetteEffect

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIVignetteEffect"];
}

@end


@implementation DBVortexDistortion

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIVortexDistortion"];
}

@end


@implementation DBWhitePointAdjust

+ (instancetype)filter {
    return (id)[CIFilter filterWithName:@"CIWhitePointAdjust"];
}

@end


