/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class CIImage, NSArray, _UIDecompressionInfo;

@interface UIImage : NSObject <NSSecureCoding, NSCoding> {
    struct { 
        unsigned int named : 1; 
        unsigned int imageOrientation : 3; 
        unsigned int cached : 1; 
        unsigned int hasPattern : 1; 
        unsigned int isCIImage : 1; 
        unsigned int imageSetIdentifer : 16; 
        unsigned int renderingMode : 2; 
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _alignmentRectInsets;
    _UIDecompressionInfo *_decompressionInfo;
    } _imageFlags;
    void *_imageRef;
    float _scale;
}

@property(readonly) struct CGImage { }* CGImage;
@property(readonly) CIImage * CIImage;
@property(readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } alignmentRectInsets;
@property(readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } capInsets;
@property(readonly) double duration;
@property(readonly) int imageOrientation;
@property(readonly) NSArray * images;
@property(readonly) int leftCapWidth;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } mediaImageSubRect;
@property double mediaImageTime;
@property(setter=mp_setIsPlaceholder:) BOOL mp_isPlaceholder;
@property(readonly) int renderingMode;
@property(readonly) int resizingMode;
@property(readonly) float scale;
@property(readonly) struct CGSize { float x1; float x2; } size;
@property(readonly) int topCapHeight;

+ (id)__ck_documentIconNamed:(id)arg1;
+ (id)_applicationIconImageForBundleIdentifier:(id)arg1 format:(int)arg2 scale:(float)arg3;
+ (id)_applicationIconImageForBundleIdentifier:(id)arg1 format:(int)arg2;
+ (id)_backgroundGradientWithStartColor:(id)arg1 andEndColor:(id)arg2;
+ (id)_cachedImageForKey:(id)arg1 fromBlock:(id)arg2;
+ (id)_defaultBackgroundGradient;
+ (id)_deviceSpecificImageNamed:(id)arg1 inBundle:(id)arg2;
+ (id)_deviceSpecificImageNamed:(id)arg1;
+ (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_edgeInsetsForStylePresetName:(id)arg1 scale:(float)arg2;
+ (void)_flushCache:(id)arg1;
+ (void)_flushSharedImageCache;
+ (id)_gkImageWithRawData:(id)arg1 size:(struct CGSize { float x1; float x2; })arg2 scale:(float)arg3 rowBytes:(unsigned long)arg4 bitmapInfo:(unsigned int)arg5;
+ (void)_gkloadRemoteImageForURL:(id)arg1 queue:(id)arg2 withCompletionHandler:(id)arg3;
+ (id)_iAd_imageNamed:(id)arg1;
+ (id)_iconForResourceProxy:(id)arg1 format:(int)arg2;
+ (id)_iconForResourceProxy:(id)arg1 variant:(int)arg2 variantsScale:(float)arg3;
+ (int)_iconVariantForUIApplicationIconFormat:(int)arg1 scale:(float*)arg2;
+ (struct CGSize { float x1; float x2; })_legibilityImageSizeForSize:(struct CGSize { float x1; float x2; })arg1 style:(int)arg2;
+ (id)_mapkit_imageNamed:(id)arg1;
+ (id)_tintedImageForSize:(struct CGSize { float x1; float x2; })arg1 withTint:(id)arg2 effectsImage:(id)arg3 maskImage:(id)arg4 style:(int)arg5;
+ (id)_tintedImageForSize:(struct CGSize { float x1; float x2; })arg1 withTint:(id)arg2 maskImage:(id)arg3 effectsImage:(id)arg4 style:(int)arg5 edgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg6;
+ (id)_tintedImageForSize:(struct CGSize { float x1; float x2; })arg1 withTint:(id)arg2 maskImage:(id)arg3 effectsImage:(id)arg4 style:(int)arg5;
+ (id)abImageNamed:(id)arg1;
+ (id)abImageNamed:(id)arg1;
+ (id)ab_imageNamed:(id)arg1;
+ (id)ab_tintedImageNamed:(id)arg1 withTint:(id)arg2;
+ (id)animatedImageNamed:(id)arg1 duration:(double)arg2;
+ (id)animatedImageWithImages:(id)arg1 duration:(double)arg2;
+ (id)animatedResizableImageNamed:(id)arg1 capInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg2 duration:(double)arg3;
+ (id)animatedResizableImageNamed:(id)arg1 capInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg2 resizingMode:(int)arg3 duration:(double)arg4;
+ (id)applicationImageNamed:(id)arg1;
+ (id)ckImageNamed:(id)arg1;
+ (id)ckImageWithData:(id)arg1;
+ (id)imageAtPath:(id)arg1;
+ (id)imageFromAlbumArtData:(id)arg1 artworkInfo:(struct MLArtworkInstanceInfo { struct MLArtworkFormatSpec { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; int x_1_1_5; int x_1_1_6; BOOL x_1_1_7; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; }*)arg2;
+ (id)imageFromAlbumArtData:(id)arg1 height:(int)arg2 width:(int)arg3 bytesPerRow:(int)arg4 cache:(BOOL)arg5;
+ (id)imageNamed:(id)arg1 inBundle:(id)arg2;
+ (id)imageNamed:(id)arg1;
+ (id)imageWithCGImage:(struct CGImage { }*)arg1 scale:(float)arg2 orientation:(int)arg3;
+ (id)imageWithCGImage:(struct CGImage { }*)arg1;
+ (id)imageWithCIImage:(id)arg1 scale:(float)arg2 orientation:(int)arg3;
+ (id)imageWithCIImage:(id)arg1;
+ (id)imageWithContentsOfCPBitmapFile:(id)arg1 flags:(int)arg2;
+ (id)imageWithContentsOfFile:(id)arg1;
+ (id)imageWithData:(id)arg1 scale:(float)arg2;
+ (id)imageWithData:(id)arg1;
+ (id)imageWithPKImage:(id)arg1;
+ (id)imageWithSize:(struct CGSize { float x1; float x2; })arg1 opaque:(BOOL)arg2 fromBlock:(id)arg3;
+ (void)initialize;
+ (id)kitImageNamed:(id)arg1;
+ (id)nikeRunLandscapeBackgroundImage;
+ (id)pu_PhotosUIImageNamed:(id)arg1;
+ (id)reversedNikeRunLandscapeBackgroundImage;
+ (void)setPreferredSharedImageScale:(float)arg1;
+ (id)siriui_semiTransparentChevronImage;
+ (id)socialFrameworkImageNamed:(id)arg1 leftCapWidth:(float)arg2 topCapHeight:(float)arg3;
+ (id)socialFrameworkImageNamed:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)tpImageNamed:(id)arg1 inBundle:(id)arg2;

- (struct CGImage { }*)CGImage;
- (id)CIImage;
- (id)MP_flatImageWithLinearGradientFromTopColor:(id)arg1 toBottomColor:(id)arg2;
- (id)MP_imageByOverlayingColor:(id)arg1;
- (void*)PL_imageContents;
- (id)WAImageLoaderPreCacheImage;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })__ck_contentsCenter;
- (id)__ck_imageWithOrientation:(int)arg1;
- (id)__ck_resizableBalloonWithOrientation:(BOOL)arg1 skinny:(BOOL)arg2 framed:(BOOL)arg3;
- (id)_applicationIconImageForFormat:(int)arg1 precomposed:(BOOL)arg2 scale:(float)arg3;
- (id)_applicationIconImageForFormat:(int)arg1 precomposed:(BOOL)arg2;
- (id)_applyBackdropViewSettings:(id)arg1 allowImageResizing:(BOOL)arg2;
- (id)_applyBackdropViewSettings:(id)arg1 includeTints:(BOOL)arg2 includeBlur:(BOOL)arg3 allowImageResizing:(BOOL)arg4;
- (id)_applyBackdropViewSettings:(id)arg1 includeTints:(BOOL)arg2 includeBlur:(BOOL)arg3;
- (id)_applyBackdropViewSettings:(id)arg1;
- (id)_applyBackdropViewStyle:(int)arg1 includeTints:(BOOL)arg2 includeBlur:(BOOL)arg3 graphicsQuality:(int)arg4 allowImageResizing:(BOOL)arg5;
- (id)_applyBackdropViewStyle:(int)arg1 includeTints:(BOOL)arg2 includeBlur:(BOOL)arg3 graphicsQuality:(int)arg4;
- (id)_applyBackdropViewStyle:(int)arg1 includeTints:(BOOL)arg2 includeBlur:(BOOL)arg3;
- (id)_automationID;
- (id)_bezeledImageWithShadowRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 fillRed:(float)arg5 green:(float)arg6 blue:(float)arg7 alpha:(float)arg8 drawShadow:(BOOL)arg9;
- (struct { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; })_calculateStatistics;
- (BOOL)_canEncodeWithName:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_contentRectInPixels;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_contentStretchInPixels;
- (void)_decompressionComplete;
- (void)_decompressionFallbackImageCreation;
- (id)_doubleBezeledImageWithExteriorShadowRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 interiorShadowRed:(float)arg5 green:(float)arg6 blue:(float)arg7 alpha:(float)arg8 fillRed:(float)arg9 green:(float)arg10 blue:(float)arg11 alpha:(float)arg12;
- (void)_drawImageForLegibilitySettings:(id)arg1 strength:(float)arg2 size:(struct CGSize { float x1; float x2; })arg3;
- (void)_drawImageForLegibilityStyle:(int)arg1 size:(struct CGSize { float x1; float x2; })arg2;
- (void)_encodeDataWithCoder:(id)arg1 imageName:(id)arg2;
- (void)_encodePropertiesWithCoder:(id)arg1;
- (id)_flatImageWithColor:(id)arg1;
- (id)_flatImageWithWhite:(float)arg1 alpha:(float)arg2;
- (void)_gkDrawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withMask:(id)arg2;
- (id)_gkImageByAddingAlpha;
- (id)_gkImageByApplyingMask:(id)arg1 rect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (id)_gkImageByScalingAndCroppingToSize:(struct CGSize { float x1; float x2; })arg1 scale:(float)arg2;
- (id)_gkImageByScalingToSize:(struct CGSize { float x1; float x2; })arg1 scale:(float)arg2 padColor:(id)arg3;
- (id)_gkImageByScalingToSize:(struct CGSize { float x1; float x2; })arg1 scale:(float)arg2;
- (id)_gkImageByScalingToSize:(struct CGSize { float x1; float x2; })arg1;
- (id)_gkImageByTintingWithColor:(id)arg1;
- (id)_gkImageWithProgress:(float)arg1;
- (id)_gkMaskImageWithProgress:(float)arg1;
- (id)_gkQuestionMarkImage;
- (void)_gkReadAtSize:(struct CGSize { float x1; float x2; })arg1 ARGBHostEndianBytes:(id)arg2;
- (id)_imageForLegibilitySettings:(id)arg1 strength:(float)arg2;
- (id)_imageForLegibilityStyle:(int)arg1;
- (id)_imageScaledToProportion:(float)arg1 interpolationQuality:(int)arg2;
- (int)_imageSetIdentifier;
- (id)_imageWithBrightnessModifiedForLegibilityStyle:(int)arg1;
- (id)_imageWithLetterpressEffectWithForegroundColor:(id)arg1;
- (id)_initWithData:(id)arg1 immediateLoadWithMaxSize:(struct CGSize { float x1; float x2; })arg2 scale:(float)arg3 renderingIntent:(int)arg4;
- (id)_initWithData:(id)arg1 preserveScale:(BOOL)arg2 cache:(BOOL)arg3;
- (id)_initWithData:(id)arg1 preserveScale:(BOOL)arg2;
- (id)_initWithData:(id)arg1 scale:(float)arg2;
- (id)_initWithIOSurface:(struct __IOSurface { }*)arg1 imageOrientation:(int)arg2;
- (id)_initWithIOSurface:(struct __IOSurface { }*)arg1 scale:(float)arg2 orientation:(int)arg3;
- (id)_initWithOtherImage:(id)arg1;
- (BOOL)_isCached;
- (BOOL)_isDecompressing;
- (BOOL)_isInvisibleAndGetIsTranslucent:(BOOL*)arg1;
- (BOOL)_isNamed;
- (BOOL)_isResizable;
- (BOOL)_isSubimage;
- (BOOL)_isTiledWhenStretchedToSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGColor { }*)_patternColor;
- (void)_preheatBitmapData;
- (id)_resizableImageWithCapMask:(int)arg1;
- (id)_resizableImageWithSubimageInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1 resizeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg2;
- (void)_saveDecompressedImage:(struct CGImage { }*)arg1;
- (id)_selectedTabBarItemImageWithTintColor:(id)arg1 metrics:(int)arg2 style:(int)arg3 forScreenScale:(float)arg4;
- (id)_serializedData;
- (void)_setAlignmentRectInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)_setAlwaysStretches:(BOOL)arg1;
- (void)_setCached:(BOOL)arg1;
- (void)_setImageSetIdentifier:(int)arg1;
- (void)_setNamed:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })_sizeInPixels;
- (void)_startEagerDecompression;
- (id)_stretchableImageWithCapInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (id)_subimageInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)_tabBarItemImageWithTintColor:(id)arg1 selected:(BOOL)arg2 metrics:(int)arg3 style:(int)arg4 forScreenScale:(float)arg5;
- (struct CGColor { }*)_tiledPatternColor;
- (id)_unselectedTabBarItemImageWithTintColor:(id)arg1 metrics:(int)arg2 style:(int)arg3 forScreenScale:(float)arg4;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })alignmentRectInsets;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bitmapRectFromImageRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })capInsets;
- (void)compositeToPoint:(struct CGPoint { float x1; float x2; })arg1 fromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 operation:(int)arg3 fraction:(float)arg4;
- (void)compositeToPoint:(struct CGPoint { float x1; float x2; })arg1 operation:(int)arg2 fraction:(float)arg3;
- (void)compositeToPoint:(struct CGPoint { float x1; float x2; })arg1 operation:(int)arg2;
- (void)compositeToRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 operation:(int)arg3 fraction:(float)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)decode;
- (void)draw1PartImageInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fraction:(float)arg2 operation:(int)arg3;
- (void)draw1PartImageInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fraction:(float)arg2;
- (void)draw1PartImageInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)draw3PartImageWithSliceRects:(struct { struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_1_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; })arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 fraction:(float)arg3;
- (void)draw3PartImageWithSliceRects:(struct { struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_1_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; })arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 operation:(int)arg3 fraction:(float)arg4;
- (void)draw3PartImageWithSliceRects:(struct { struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_1_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; })arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)draw9PartImageWithSliceRects:(struct { struct { struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_1_1_1; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_2_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_2_2_2; } x_1_1_2; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_3_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_3_2_2; } x_1_1_3; } x1; struct { struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_2_1_1; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_2_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_2_2_2; } x_2_1_2; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_3_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_3_2_2; } x_2_1_3; } x2; struct { struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_3_1_1; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_2_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_2_2_2; } x_3_1_2; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_3_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_3_2_2; } x_3_1_3; } x3; })arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 fraction:(float)arg3;
- (void)draw9PartImageWithSliceRects:(struct { struct { struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_1_1_1; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_2_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_2_2_2; } x_1_1_2; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_3_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_3_2_2; } x_1_1_3; } x1; struct { struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_2_1_1; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_2_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_2_2_2; } x_2_1_2; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_3_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_3_2_2; } x_2_1_3; } x2; struct { struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_3_1_1; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_2_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_2_2_2; } x_3_1_2; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_3_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_3_2_2; } x_3_1_3; } x3; })arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 operation:(int)arg3 fraction:(float)arg4;
- (void)draw9PartImageWithSliceRects:(struct { struct { struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_1_1_1; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_2_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_2_2_2; } x_1_1_2; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_3_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_3_2_2; } x_1_1_3; } x1; struct { struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_2_1_1; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_2_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_2_2_2; } x_2_1_2; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_3_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_3_2_2; } x_2_1_3; } x2; struct { struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_3_1_1; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_2_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_2_2_2; } x_3_1_2; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_3_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_3_2_2; } x_3_1_3; } x3; })arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)drawAsPatternInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)drawAtPoint:(struct CGPoint { float x1; float x2; })arg1 blendMode:(int)arg2 alpha:(float)arg3;
- (void)drawAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 blendMode:(int)arg2 alpha:(float)arg3;
- (void)drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (int)imageOrientation;
- (struct CGImage { }*)imageRef;
- (id)imageResizedTo:(struct CGSize { float x1; float x2; })arg1 preserveAspectRatio:(BOOL)arg2;
- (id)imageResizedTo:(struct CGSize { float x1; float x2; })arg1;
- (id)imageWithAlignmentRectInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (id)imageWithEtchedBorderOfColor:(id)arg1 radius:(float)arg2;
- (id)imageWithRenderingMode:(int)arg1;
- (id)imageWithShadow:(id)arg1;
- (id)images;
- (id)initWithCGImage:(struct CGImage { }*)arg1 imageOrientation:(int)arg2;
- (id)initWithCGImage:(struct CGImage { }*)arg1 scale:(float)arg2 orientation:(int)arg3;
- (id)initWithCGImage:(struct CGImage { }*)arg1;
- (id)initWithCIImage:(id)arg1 scale:(float)arg2 orientation:(int)arg3;
- (id)initWithCIImage:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1 cache:(BOOL)arg2;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithData:(id)arg1 cache:(BOOL)arg2;
- (id)initWithData:(id)arg1 scale:(float)arg2;
- (id)initWithData:(id)arg1;
- (id)initWithIOSurface:(struct __IOSurface { }*)arg1;
- (struct __IOSurface { }*)ioSurface;
- (int)leftCapWidth;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })mediaImageSubRect;
- (double)mediaImageTime;
- (BOOL)mpIsCoverflowPlaceholder;
- (BOOL)mp_isPlaceholder;
- (void)mp_setIsPlaceholder:(BOOL)arg1;
- (id)mp_stretchableImageWithLeftCapWidth:(int)arg1 rightCapWidth:(int)arg2;
- (id)newImageRotatedByDegrees:(float)arg1;
- (id)newImageWithOrientation:(int)arg1;
- (id)patternColor;
- (id)pl_imageJPEGData;
- (void)pu_drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withContentMode:(int)arg2;
- (id)pu_tintedImageWithColor:(id)arg1;
- (int)renderingMode;
- (id)resizableImageWithCapInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1 resizingMode:(int)arg2;
- (id)resizableImageWithCapInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (int)resizingMode;
- (void)saveToPath:(id)arg1;
- (id)sbf_imageMaskedByColor:(id)arg1 withShadow:(id)arg2;
- (id)sbf_imageMaskedByColor:(id)arg1;
- (id)sbf_imageWithEtchedBorderOfColor:(id)arg1 radius:(float)arg2;
- (id)sbf_imageWithShadow:(id)arg1;
- (id)sbf_invertedMaskImage;
- (id)sbf_maskImage;
- (float)scale;
- (void)setMediaImageSubRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setMediaImageTime:(double)arg1;
- (struct CGSize { float x1; float x2; })size;
- (id)stretchableImageWithLeftCapWidth:(int)arg1 rightCapWidth:(int)arg2;
- (id)stretchableImageWithLeftCapWidth:(int)arg1 topCapHeight:(int)arg2;
- (int)topCapHeight;
- (id)wlImageByRecoloringWithColor:(id)arg1;
- (id)wlResizableImageByTilingCenterPixel;
- (BOOL)writeToCPBitmapFile:(id)arg1 flags:(int)arg2;

@end
