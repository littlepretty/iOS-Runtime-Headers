/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VGLFlatBuildingStrokeProgram : VGLStrokePolygonProgram {
    float _layeringHeightOffset;
    float _layeringHeightScale;
    float _maxLayeringHeight;
    int _uLayeringHeightOffset;
    int _uLayeringHeightScale;
    int _uMaxLayeringHeight;
}

@property float layeringHeightOffset;
@property float layeringHeightScale;
@property float maxLayeringHeight;

+ (id)fragName;
+ (id)vertName;

- (float)layeringHeightOffset;
- (float)layeringHeightScale;
- (float)maxLayeringHeight;
- (void)setLayeringHeightOffset:(float)arg1;
- (void)setLayeringHeightScale:(float)arg1;
- (void)setMaxLayeringHeight:(float)arg1;
- (void)setup;

@end
