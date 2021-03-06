/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

@class <PLAssetContainer>, <PLAssetContainerList>, <PUAvalancheReviewControllerDelegate>, NSIndexPath, NSMutableSet, PLAvalanche, PLManagedAsset, PUAvalancheReporter, PUAvalancheReviewCollectionViewLayout, PUAvalancheReviewControllerSpec, PUImageManager, PUPhotoBrowserController, PUPhotosSharingTransitionContext, PUReviewInstructionalView, PUReviewScrubber, UIBarButtonItem, UICollectionView, UICollectionViewLayout, UITapGestureRecognizer;

@interface PUAvalancheReviewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, PUReviewScrubberDataSource, PUReviewScrubberDelegate, PUAvalancheReviewCollectionViewLayoutDelegate, UIGestureRecognizerDelegate, PUPhotosSharingGridCellDelegate, PUPhotosSharingTransitionViewController> {
    PLAvalanche *__avalancheBeingReviewed;
    PUAvalancheReporter *__avalancheReporter;
    UIBarButtonItem *__cancelBarButtonItem;
    UICollectionView *__collectionView;
    PUAvalancheReviewCollectionViewLayout *__collectionViewLayout;
    BOOL __completingReviewMode;
    <PLAssetContainer> *__currentAssetContainer;
    UIBarButtonItem *__doneBarButtonItem;
    PUImageManager *__imageManager;
    NSIndexPath *__inFlightReferenceIndexPath;
    PLManagedAsset *__initialAsset;
    PUReviewInstructionalView *__instructionalView;
    NSMutableSet *__preheatedAssets;
    PUPhotoBrowserController *__presentingPhotoBrowserController;
    UIBarButtonItem *__reportBarButtonItem;
    PUAvalancheReviewControllerSpec *__spec;
    UITapGestureRecognizer *__tapGestureRecognizer;
    UICollectionViewLayout *__transitionLayout;
    BOOL __updatingContentOffsetFromScrubbing;
    <PLAssetContainerList> *_avalancheContainerList;
    <PUAvalancheReviewControllerDelegate> *_delegate;
    PUPhotosSharingTransitionContext *_photosSharingTransitionContext;
}

@property(readonly) PLAvalanche * _avalancheBeingReviewed;
@property(readonly) PUAvalancheReporter * _avalancheReporter;
@property(readonly) UIBarButtonItem * _cancelBarButtonItem;
@property(readonly) UICollectionView * _collectionView;
@property(readonly) PUAvalancheReviewCollectionViewLayout * _collectionViewLayout;
@property BOOL _completingReviewMode;
@property(readonly) <PLAssetContainer> * _currentAssetContainer;
@property(readonly) UIBarButtonItem * _doneBarButtonItem;
@property(readonly) PUImageManager * _imageManager;
@property(readonly) NSIndexPath * _inFlightReferenceIndexPath;
@property(readonly) PLManagedAsset * _initialAsset;
@property(readonly) PUReviewInstructionalView * _instructionalView;
@property(setter=_setPreheatedAssets:,retain) NSMutableSet * _preheatedAssets;
@property(readonly) PUPhotoBrowserController * _presentingPhotoBrowserController;
@property(readonly) UIBarButtonItem * _reportBarButtonItem;
@property(readonly) PUReviewScrubber * _reviewScrubber;
@property(readonly) PUAvalancheReviewControllerSpec * _spec;
@property(readonly) UITapGestureRecognizer * _tapGestureRecognizer;
@property(setter=_setTransitionLayout:,retain) UICollectionViewLayout * _transitionLayout;
@property(readonly) BOOL _updatingContentOffsetFromScrubbing;
@property(readonly) <PLAssetContainerList> * avalancheContainerList;
@property <PUAvalancheReviewControllerDelegate> * delegate;
@property(retain) PUPhotosSharingTransitionContext * photosSharingTransitionContext;

+ (id)filteringContext;

- (void).cxx_destruct;
- (id)_actionViewRootView;
- (id)_assetAtIndexPath:(id)arg1;
- (id)_avalancheBeingReviewed;
- (id)_avalancheReporter;
- (id)_cancelBarButtonItem;
- (void)_cancelReviewMode;
- (void)_cancelReviewModeAction:(id)arg1;
- (id)_collectionView;
- (id)_collectionViewLayout;
- (BOOL)_completingReviewMode;
- (void)_crossfadeToAssetAndDismiss:(id)arg1;
- (id)_currentAsset;
- (id)_currentAssetContainer;
- (void)_dismissReviewController;
- (id)_doneBarButtonItem;
- (void)_finishReviewModeAction:(id)arg1;
- (void)_getFirstValidIndexPath:(id*)arg1 lastValidIndexPath:(id*)arg2;
- (void)_getMainCollectionViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1 collectionViewLayoutInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; }*)arg2 orientation:(int)arg3;
- (void)_handleTapAtIndexPath:(id)arg1;
- (void)_handleTapInMainCollectionView:(id)arg1;
- (float)_horizontalOffsetInCollectionView:(id)arg1 forCenteringOnItemAtIndexPath:(id)arg2;
- (id)_imageManager;
- (id)_inFlightReferenceIndexPath;
- (id)_indexPathInCollectionView:(id)arg1 closestToPoint:(struct CGPoint { float x1; float x2; })arg2 excludingIndexPath:(id)arg3;
- (id)_indexPathOfCenterVisibleItemInCollectionView:(id)arg1;
- (id)_initialAsset;
- (id)_instructionalView;
- (void)_pageToIndexPath:(id)arg1 animated:(BOOL)arg2;
- (id)_preheatedAssets;
- (id)_presentingPhotoBrowserController;
- (void)_promoteFavoriteAssetsWithReviewCompletionHandler:(id)arg1;
- (void)_reallyToggleCurrentPickStatusAtIndexPath:(id)arg1;
- (void)_reloadAvalancheDataWithAsset:(id)arg1;
- (id)_reportBarButtonItem;
- (void)_reportButtonAction:(id)arg1;
- (id)_reviewScrubber;
- (id)_selectionViewAtIndexPath:(id)arg1 forCollectionView:(id)arg2;
- (void)_setPreheatedAssets:(id)arg1;
- (void)_setTransitionLayout:(id)arg1;
- (struct CGSize { float x1; float x2; })_sizeForItemAtIndexPath:(id)arg1 interfaceOrientation:(int)arg2;
- (id)_spec;
- (id)_tapGestureRecognizer;
- (void)_toggleCurrentPickStatusAtIndexPath:(id)arg1;
- (id)_transitionLayout;
- (void)_updateBarItemsAnimated:(BOOL)arg1;
- (void)_updateCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)_updateCollectionViewLayoutInsets;
- (void)_updateEnabledNavigationBarItems;
- (void)_updateMainViewAnimated:(BOOL)arg1;
- (void)_updateNavigationItemTitle;
- (void)_updatePreheatedAssets;
- (void)_updateReviewScrubberFromContentOffset;
- (BOOL)_updatingContentOffsetFromScrubbing;
- (void)assetContainerDidChange:(id)arg1;
- (BOOL)automaticallyAdjustsScrollViewInsets;
- (id)avalancheContainerList;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)dealloc;
- (id)delegate;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (id)embeddedActivityView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })embeddedActivityViewFrameWhenShowing:(BOOL)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithSpec:(id)arg1 startingAtAsset:(id)arg2 inAvalanche:(id)arg3 currentAssetContainer:(id)arg4 fromPhotoBrowserController:(id)arg5;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })layout:(id)arg1 collectionView:(id)arg2 selectionBadgeFrameForItemFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 atIndexPath:(id)arg4;
- (struct CGSize { float x1; float x2; })layout:(id)arg1 collectionView:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (unsigned int)numberOfPhotosInReviewScrubber:(id)arg1;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (id)photosSharingGridCellBadgeForZooming:(id)arg1 layoutAnchor:(unsigned int*)arg2;
- (void)photosSharingGridCellDidEndZooming:(id)arg1;
- (BOOL)photosSharingGridCellShouldBeginZooming:(id)arg1;
- (id)photosSharingGridCellViewForZooming:(id)arg1;
- (id)photosSharingTransitionContext;
- (BOOL)pu_wantsNavigationBarVisible;
- (BOOL)pu_wantsStatusBarVisible;
- (BOOL)pu_wantsTabBarVisible;
- (BOOL)pu_wantsToolbarVisible;
- (void)reviewScrubber:(id)arg1 willDisplayCell:(id)arg2 atIndexPath:(id)arg3;
- (void)reviewScrubberDidScrub:(id)arg1;
- (void)reviewScrubberDidSelectItemAtIndexPath:(id)arg1;
- (int)reviewScrubberImageFormat;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { float x1; float x2; })arg2 targetContentOffset:(inout struct CGPoint { float x1; float x2; }*)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })selectionBadgeFrameForItemFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 atIndexPath:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setPhotosSharingTransitionContext:(id)arg1;
- (void)setPhotosSharingTransitionLayout:(id)arg1 animated:(BOOL)arg2;
- (void)set_completingReviewMode:(BOOL)arg1;
- (BOOL)shouldAutorotate;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (id)transitionCollectionView;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end
