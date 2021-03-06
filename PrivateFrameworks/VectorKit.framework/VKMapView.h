/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class <VKMapViewDelegate>, <VKRoutePreloadSession>, CADisplay, GEOMapRegion, NSArray, NSString, VKAnimation, VKClassicGlobeCanvas, VKLabelMarker, VKMapCanvas, VKPolylineOverlayPainter;

@interface VKMapView : CALayer <VKInteractiveMapDelegate> {
    VKMapCanvas *_canvas;
    VKAnimation *_edgeInsetAnimation;
    VKClassicGlobeCanvas *_globe;
    BOOL _isChangingMapType;
    BOOL _loaderOpen;
    <VKMapViewDelegate> *_mapDelegate;
    int _mapDisplayStyle;
    VKAnimation *_mapDisplayStyleAnimation;
    int _mapType;
    NSString *_tileLoaderClientID;
}

@property BOOL allowDatelineWraparound;
@property(readonly) double altitude;
@property(retain) NSArray * alwaysVisibleTrafficIncidents;
@property(getter=isAnimatingToTrackAnnotation,readonly) BOOL animatingToTrackAnnotation;
@property(readonly) NSArray * annotationMarkers;
@property int annotationTrackingZoomStyle;
@property(readonly) BOOL canEnter3DMode;
@property(readonly) BOOL canShowAnimationForPlaceCard;
@property(readonly) BOOL canShowFlyover;
@property struct { double x1; double x2; double x3; } centerCoordinate;
@property BOOL debugDrawContinuously;
@property BOOL debugEnableMultisampling;
@property(readonly) float debugFramesPerSecond;
@property BOOL debugLayoutContinuously;
@property BOOL debugPaintFrameRateGraph;
@property int displayRate;
@property BOOL dynamicMapModesEnabled;
@property struct VKEdgeInsets { float x1; float x2; float x3; float x4; } edgeInsets;
@property(readonly) BOOL enableDebugLabelHighlighting;
@property(retain) VKPolylineOverlayPainter * focusedLabelsPolylinePainter;
@property(getter=isFullyDrawn,readonly) BOOL fullyDrawn;
@property struct VKEdgeInsets { float x1; float x2; float x3; float x4; } fullyOccludedEdgeInsets;
@property(getter=isFullyPitched,readonly) BOOL fullyPitched;
@property(getter=isGesturing) BOOL gesturing;
@property(retain) CADisplay * hostDisplay;
@property BOOL iconsShouldAlignToPixels;
@property(readonly) BOOL isMotionControlActive;
@property BOOL isPitchable;
@property struct VKEdgeInsets { float x1; float x2; float x3; float x4; } labelEdgeInsets;
@property(getter=isLabelMarkerSelectionEnabled) BOOL labelMarkerSelectionEnabled;
@property(readonly) NSArray * labelMarkers;
@property int labelScaleFactor;
@property BOOL localizeLabels;
@property <VKMapViewDelegate> * mapDelegate;
@property int mapDisplayStyle;
@property(retain) GEOMapRegion * mapRegion;
@property(readonly) GEOMapRegion * mapRegionOfInterest;
@property int mapType;
@property(readonly) double maximumZoomLevel;
@property(readonly) double minimumZoomLevel;
@property int navigationShieldSize;
@property(readonly) double pitch;
@property(getter=isPitched,readonly) BOOL pitched;
@property(readonly) double presentationYaw;
@property BOOL rendersInBackground;
@property(retain) <VKRoutePreloadSession> * routePreloadSession;
@property(readonly) VKLabelMarker * selectedLabelMarker;
@property int shieldIdiom;
@property int shieldSize;
@property BOOL shouldLoadFallbackTiles;
@property BOOL shouldLoadMapMargin;
@property(getter=isShowingFlyover,readonly) BOOL showingFlyover;
@property BOOL showsBuildings;
@property BOOL showsPointsOfInterest;
@property BOOL staysCenteredDuringPinch;
@property BOOL staysCenteredDuringRotation;
@property int trackingCameraPanStyle;
@property double trackingZoomScale;
@property BOOL trafficEnabled;
@property double userZoomFocusStyleGroundspanMeters;
@property double userZoomFocusStyleMaxGroundspanMeters;
@property double userZoomFocusStyleMinGroundspanMeters;
@property(readonly) NSArray * visibleTileSets;
@property(readonly) double yaw;

+ (id)installedStylesheetNames;

- (void)_createGlobe;
- (void)_initializeGlobe;
- (void)_mapkit_configureFromDefaults:(BOOL)arg1;
- (void)_setStyleTransitionProgress:(float)arg1 targetStyle:(int)arg2 step:(int)arg3;
- (float)_styleTransitionProgress;
- (void)addAnnotationMarker:(id)arg1 allowAnimation:(BOOL)arg2;
- (void)addExternalAnchor:(id)arg1;
- (void)addOverlay:(id)arg1;
- (void)addPersistentOverlay:(id)arg1;
- (void)addRasterOverlay:(id)arg1;
- (BOOL)allowDatelineWraparound;
- (double)altitude;
- (id)alwaysVisibleTrafficIncidents;
- (void)animateToMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 completion:(id)arg5;
- (id)annotationCoordinateTest;
- (id)annotationMarkerForSelectionAtPoint:(struct CGPoint { float x1; float x2; })arg1 avoidCurrent:(BOOL)arg2;
- (id)annotationMarkers;
- (id)annotationRectTest;
- (int)annotationTrackingZoomStyle;
- (id)attributionsForCurrentRegion;
- (BOOL)buildingFootprintsDisabled;
- (BOOL)canEnter3DMode;
- (BOOL)canShowAnimationForPlaceCard;
- (BOOL)canShowAnimationForSearchResultWithMapRegion:(id)arg1;
- (BOOL)canShowFlyover;
- (struct { double x1; double x2; double x3; })centerCoordinate;
- (void)clearScene;
- (void)closeLoaderConnection;
- (id)consoleString:(BOOL)arg1;
- (struct CGPoint { float x1; float x2; })convertCoordinate:(struct { double x1; double x2; })arg1 toCameraModelPointToLayer:(id)arg2;
- (struct CGPoint { float x1; float x2; })convertCoordinate:(struct { double x1; double x2; })arg1 toPointToLayer:(id)arg2;
- (struct CGPoint { float x1; float x2; })convertMapPoint:(struct { double x1; double x2; })arg1 toPointToLayer:(id)arg2;
- (struct { double x1; double x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 toCoordinateFromLayer:(id)arg2;
- (struct { double x1; double x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 toMapPointFromLayer:(id)arg2;
- (id)currentCanvas;
- (double)currentZoomLevel;
- (BOOL)currentZoomLevelAllowsRotation;
- (void)dealloc;
- (BOOL)debugDrawContinuously;
- (BOOL)debugEnableMultisampling;
- (float)debugFramesPerSecond;
- (void)debugHighlightLabelAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)debugLayoutContinuously;
- (BOOL)debugPaintFrameRateGraph;
- (void)debugRunPerformanceTestWithOutputHeader:(id)arg1;
- (void)debugShowTourJump:(BOOL)arg1;
- (void)deselectAnnotationMarker:(id)arg1;
- (void)deselectLabelMarker;
- (id)detailedDescription;
- (void)didEnterBackground;
- (void)didStartPanningDeceleration;
- (int)displayRate;
- (double)durationToAnimateToMapRegion:(id)arg1;
- (BOOL)dynamicMapModesEnabled;
- (struct VKEdgeInsets { float x1; float x2; float x3; float x4; })edgeInsets;
- (BOOL)enableDebugLabelHighlighting;
- (void)enter3DMode;
- (void)exit3DMode;
- (id)focusedLabelsPolylinePainter;
- (void)forceLayout;
- (void)forceSceneLoad;
- (struct VKEdgeInsets { float x1; float x2; float x3; float x4; })fullyOccludedEdgeInsets;
- (void)goToTileX:(int)arg1 Y:(int)arg2 Z:(int)arg3 tileSize:(int)arg4;
- (BOOL)gridDisabled;
- (id)hostDisplay;
- (BOOL)iconsShouldAlignToPixels;
- (id)initWithGlobe:(BOOL)arg1 shouldRasterize:(BOOL)arg2 inBackground:(BOOL)arg3;
- (void)insertRasterOverlay:(id)arg1 aboveOverlay:(id)arg2;
- (void)insertRasterOverlay:(id)arg1 belowOverlay:(id)arg2;
- (BOOL)isAnimatingToTrackAnnotation;
- (BOOL)isFullyDrawn;
- (BOOL)isFullyPitched;
- (BOOL)isGesturing;
- (BOOL)isLabelMarkerSelectionEnabled;
- (BOOL)isMotionControlActive;
- (BOOL)isPitchable;
- (BOOL)isPitched;
- (BOOL)isPointValidForGesturing:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)isShowingFlyover;
- (BOOL)isShowingNoDataPlaceholders;
- (struct VKEdgeInsets { float x1; float x2; float x3; float x4; })labelEdgeInsets;
- (id)labelMarkerForSelectionAtPoint:(struct CGPoint { float x1; float x2; })arg1 selectableLabelsOnly:(BOOL)arg2;
- (id)labelMarkers;
- (int)labelScaleFactor;
- (BOOL)labelsDisabled;
- (BOOL)localizeLabels;
- (void)map:(id)arg1 canEnter3DModeDidChange:(BOOL)arg2;
- (void)map:(id)arg1 canShowFlyoverDidChange:(BOOL)arg2;
- (void)map:(id)arg1 didAddAnnotationMarkers:(id)arg2;
- (void)map:(id)arg1 didAnimateInAnnotationMarkers:(id)arg2;
- (void)map:(id)arg1 didBecomePitched:(BOOL)arg2;
- (void)map:(id)arg1 didFinishAddingAnnotationMarkers:(id)arg2;
- (id)map:(id)arg1 painterForOverlay:(id)arg2;
- (id)map:(id)arg1 presentationForAnnotation:(id)arg2;
- (void)map:(id)arg1 selectedLabelMarkerWillDisappear:(id)arg2;
- (void)map:(id)arg1 willAnimateInAnnotationMarkers:(id)arg2;
- (void)map:(id)arg1 willTransitionFrom:(int)arg2 to:(int)arg3 duration:(double)arg4;
- (id)mapDelegate;
- (void)mapDidBecomeFullyDrawn:(id)arg1 hasFailedTiles:(BOOL)arg2;
- (void)mapDidBecomePartiallyDrawn:(id)arg1;
- (void)mapDidChangeVisibleRegion:(id)arg1;
- (void)mapDidDraw:(id)arg1;
- (void)mapDidFailLoadingTiles:(id)arg1 withError:(id)arg2;
- (void)mapDidFinishChangingMapDisplayStyle:(int)arg1;
- (void)mapDidFinishLoadingTiles:(id)arg1;
- (void)mapDidStartLoadingTiles:(id)arg1;
- (void)mapDidStopRegionAnimation:(id)arg1 completed:(BOOL)arg2;
- (int)mapDisplayStyle;
- (id)mapRegion;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })mapRegionBounds;
- (id)mapRegionOfInterest;
- (int)mapType;
- (void)mapWillStartRegionAnimation:(id)arg1;
- (double)maximumZoomLevel;
- (double)minimumZoomLevel;
- (int)navigationShieldSize;
- (void)openLoaderConnection;
- (void)panWithOffset:(struct CGPoint { float x1; float x2; })arg1 relativeToScreenPoint:(struct CGPoint { float x1; float x2; })arg2 animated:(BOOL)arg3 duration:(double)arg4 completionHandler:(id)arg5;
- (double)pitch;
- (BOOL)polygonsDisabled;
- (void)preloadNavigationSceneAnimationResourcesForDisplayStyle:(int)arg1;
- (void)preloadNavigationSceneResources;
- (void)preparePlaceCardAnimationForLocation:(struct { double x1; double x2; })arg1 completion:(id)arg2;
- (double)presentationYaw;
- (void)puckAnimator:(id)arg1 updatedPosition:(struct { struct VKPoint { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; double x2; BOOL x3; }*)arg2;
- (void)puckAnimator:(id)arg1 updatedTargetPosition:(struct VKPoint { double x1; double x2; double x3; })arg2;
- (void)puckAnimatorDidStop:(id)arg1;
- (BOOL)rastersDisabled;
- (BOOL)realisticLandDisabled;
- (BOOL)realisticRoadsDisabled;
- (void)removeAnnotationMarker:(id)arg1;
- (void)removeExternalAnchor:(id)arg1;
- (void)removeOverlay:(id)arg1;
- (void)removePersistentOverlay:(id)arg1;
- (void)removeRasterOverlay:(id)arg1;
- (BOOL)rendersInBackground;
- (void)resetContext;
- (BOOL)restoreViewportFromInfo:(id)arg1;
- (BOOL)roadClassDisabled:(int)arg1;
- (BOOL)roadsDisabled;
- (id)routePreloadSession;
- (void)runAnimation:(id)arg1;
- (id)secondaryCanvas;
- (void)selectAnnotationMarker:(id)arg1;
- (void)selectLabelMarker:(id)arg1;
- (id)selectedLabelMarker;
- (void)setAllowDatelineWraparound:(BOOL)arg1;
- (void)setAlwaysVisibleTrafficIncidents:(id)arg1;
- (void)setAnnotationMarkerDeselectionCallback:(id)arg1;
- (void)setAnnotationTrackingZoomStyle:(int)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setCanonicalSkyHeight:(double)arg1;
- (void)setCenterCoordinate:(struct { double x1; double x2; double x3; })arg1 animated:(BOOL)arg2;
- (void)setCenterCoordinate:(struct { double x1; double x2; double x3; })arg1;
- (void)setCenterCoordinate:(struct { double x1; double x2; })arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 timingCurve:(id)arg6 completion:(id)arg7;
- (void)setContentsScale:(float)arg1;
- (void)setCurrentLocationText:(id)arg1;
- (void)setDebugDrawContinuously:(BOOL)arg1;
- (void)setDebugEnableMultisampling:(BOOL)arg1;
- (void)setDebugLayoutContinuously:(BOOL)arg1;
- (void)setDebugPaintFrameRateGraph:(BOOL)arg1;
- (void)setDesiredMapMode:(int)arg1 immediate:(BOOL)arg2;
- (void)setDisableBuildingFootprints:(BOOL)arg1;
- (void)setDisableGrid:(BOOL)arg1;
- (void)setDisableLabels:(BOOL)arg1;
- (void)setDisablePolygons:(BOOL)arg1;
- (void)setDisableRasters:(BOOL)arg1;
- (void)setDisableRealisticLand:(BOOL)arg1;
- (void)setDisableRealisticRoads:(BOOL)arg1;
- (void)setDisableRoadClass:(BOOL)arg1 forRoadClass:(int)arg2;
- (void)setDisableRoads:(BOOL)arg1;
- (void)setDisplayRate:(int)arg1;
- (void)setDynamicMapModesEnabled:(BOOL)arg1;
- (void)setEdgeInsets:(struct VKEdgeInsets { float x1; float x2; float x3; float x4; })arg1 duration:(double)arg2 timingFunction:(id)arg3;
- (void)setEdgeInsets:(struct VKEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setEnabledBlackRoadLines:(BOOL)arg1;
- (void)setFocusedLabelsPolylinePainter:(id)arg1;
- (void)setFullyOccludedEdgeInsets:(struct VKEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setGesturing:(BOOL)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setHostDisplay:(id)arg1;
- (void)setIconsShouldAlignToPixels:(BOOL)arg1;
- (void)setIsPitchable:(BOOL)arg1;
- (void)setLabelEdgeInsets:(struct VKEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setLabelMarkerSelectionEnabled:(BOOL)arg1;
- (void)setLabelScaleFactor:(int)arg1;
- (void)setLocalizeLabels:(BOOL)arg1;
- (void)setMapDelegate:(id)arg1;
- (void)setMapDisplayStyle:(int)arg1 animated:(BOOL)arg2;
- (void)setMapDisplayStyle:(int)arg1;
- (void)setMapRegion:(id)arg1 animated:(BOOL)arg2;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 animated:(BOOL)arg4 completion:(id)arg5;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 animated:(BOOL)arg4;
- (void)setMapRegion:(id)arg1;
- (void)setMapType:(int)arg1;
- (void)setNavigationShieldSize:(int)arg1;
- (void)setNeedsDisplay;
- (void)setNeedsLayout;
- (void)setPuckHorizontalOffset:(double)arg1 duration:(double)arg2 timingFunction:(id)arg3;
- (void)setRendersInBackground:(BOOL)arg1;
- (void)setRouteLineSplitAnnotation:(id)arg1;
- (void)setRoutePreloadSession:(id)arg1;
- (void)setRouteUserOffset:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (void)setShieldIdiom:(int)arg1;
- (void)setShieldSize:(int)arg1;
- (void)setShouldLimitTrackingCameraHeight:(BOOL)arg1;
- (void)setShouldLoadFallbackTiles:(BOOL)arg1;
- (void)setShouldLoadMapMargin:(BOOL)arg1;
- (void)setShowsBuildings:(BOOL)arg1;
- (void)setShowsPointsOfInterest:(BOOL)arg1;
- (void)setStaysCenteredDuringPinch:(BOOL)arg1;
- (void)setStaysCenteredDuringRotation:(BOOL)arg1;
- (void)setStylesheet:(id)arg1;
- (void)setStylesheetName:(id)arg1;
- (void)setTargetDisplay:(int)arg1;
- (void)setTracePlaybackSpeedMultiplier:(double)arg1;
- (void)setTrackingCameraPanStyle:(int)arg1;
- (void)setTrackingZoomScale:(double)arg1;
- (void)setTrafficEnabled:(BOOL)arg1;
- (void)setUserZoomFocusStyleGroundspanMeters:(double)arg1;
- (void)setUserZoomFocusStyleMaxGroundspanMeters:(double)arg1;
- (void)setUserZoomFocusStyleMinGroundspanMeters:(double)arg1;
- (void)setYaw:(double)arg1 animated:(BOOL)arg2;
- (int)shieldIdiom;
- (int)shieldSize;
- (BOOL)shouldHideOffscreenSelectedAnnotation;
- (BOOL)shouldLoadFallbackTiles;
- (BOOL)shouldLoadMapMargin;
- (void)showSearchResultAnimationAtCoordinate:(struct { double x1; double x2; })arg1 withMapRegion:(id)arg2;
- (BOOL)showsBuildings;
- (BOOL)showsPointsOfInterest;
- (void)startMotionControlWithProvider:(id)arg1;
- (void)startPanningAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)startPinchingWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)startPitchingWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)startPlaceCardAnimationAtCoordinate:(struct { double x1; double x2; })arg1 andDistance:(double)arg2;
- (void)startRotatingWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)startTrackingAnnotation:(id)arg1 trackHeading:(BOOL)arg2 animated:(BOOL)arg3;
- (BOOL)staysCenteredDuringPinch;
- (BOOL)staysCenteredDuringRotation;
- (void)stopMotionControl;
- (void)stopPanningAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)stopPinchingWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)stopPitchingWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)stopPlaceCardAnimation;
- (void)stopRotatingWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)stopScenicAnimation;
- (void)stopSnappingAnimations;
- (void)stopTracking;
- (void)stopTrackingAnnotation;
- (id)stylesheet;
- (id)stylesheetName;
- (BOOL)supportsMapType:(int)arg1;
- (int)trackingCameraPanStyle;
- (double)trackingZoomScale;
- (BOOL)trafficEnabled;
- (void)transitionToTracking:(BOOL)arg1 mapMode:(int)arg2 pounceCompletionHandler:(id)arg3;
- (void)updateCameraContext:(id)arg1;
- (void)updatePanWithTranslation:(struct CGPoint { float x1; float x2; })arg1;
- (void)updatePinchWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
- (void)updatePitchWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1 translation:(double)arg2;
- (void)updateRotationWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1 newValue:(double)arg2;
- (double)userZoomFocusStyleGroundspanMeters;
- (double)userZoomFocusStyleMaxGroundspanMeters;
- (double)userZoomFocusStyleMinGroundspanMeters;
- (id)viewportInfo;
- (id)visibleTileSets;
- (void)willEnterForeground;
- (double)yaw;
- (void)zoom:(double)arg1 withFocusPoint:(struct CGPoint { float x1; float x2; })arg2 completionHandler:(id)arg3;
- (void)zoomToLevel:(double)arg1 withFocusPoint:(struct CGPoint { float x1; float x2; })arg2;

@end
