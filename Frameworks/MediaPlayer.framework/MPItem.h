/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPAlternateTracks, MPQueueFeeder;



@interface MPItem : AVItem 
{
    MPQueueFeeder *_feeder;
    MPAlternateTracks *_alternateTracks;
    NSUInteger _type;
    double _cachedDuration;
    double _cachedPlayableDuration;
    unsigned int _advancedDuringPlayback : 1;
    unsigned int _handledFinishTime : 1;
    unsigned int _hasPlayedThisSession : 1;
    unsigned int _isOnDemandItem : 1;
    unsigned int _wasCountedAsSkipped : 1;
    unsigned int _isStreamable : 2;
    unsigned int _useCachedPlayableDuration : 1;
    unsigned int _watchingAttributes : 1;
    unsigned int _videoDisabled : 1;
}

@property BOOL hasPlayedThisSession;
@property BOOL isOnDemandItem;
@property(readonly) NSUInteger countForQueueFeeder;
@property(readonly) NSUInteger indexInQueueFeeder;
@property(getter=isVideoDisabled) BOOL videoDisabled;
@property(readonly) float defaultPlaybackRate;
@property(retain,readonly) NSArray *chapterTimeMarkers;
@property(retain,readonly) NSArray *artworkTimeMarkers;
@property(retain,readonly) NSString *displayableText;
@property(readonly) BOOL hasDisplayableText;
@property(retain,readonly) NSString *album;
@property(retain,readonly) NSString *artist;
@property(retain,readonly) NSString *albumArtist;
@property(readonly) BOOL hasArtworkData;
@property(retain,readonly) NSString *mainTitle;
@property(readonly) double playableDuration;
@property(getter=isStreamable,readonly) BOOL streamable;
@property(readonly) NSUInteger type;
@property(readonly) NSUInteger contentUniqueID;
@property(readonly) float userRating;
@property(readonly) BOOL wantsSubtitles;
@property MPQueueFeeder *feeder; /* unknown property attribute: V_feeder */
@property(retain,readonly) MPAlternateTracks *alternateTracks; /* unknown property attribute: V_alternateTracks */

+ (NSUInteger)defaultScaleMode;
+ (void)setDefaultScaleMode:(NSUInteger)arg1;

- (BOOL)allowAutoChangingScaleModeToFill;
- (id)init;
- (id)initWithPath:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (void)flushNowPlayingCaches;
- (void)resetBookkeeping;
- (void)setAlternateAudioTrackID:(NSUInteger)arg1;
- (void)setPlaybackStoppedTime:(double)arg1;
- (void)notePlaybackFinishedByHittingEnd;
- (void)setPlaybackFinishedTime:(double)arg1;
- (void)setRating:(float)arg1;
- (void)setSubtitleTrackID:(NSUInteger)arg1;
- (void)setUserAdvancedDuringPlayback:(BOOL)arg1;
- (void)setUserEnabledSubtitles:(BOOL)arg1;
- (void)setUserSkippedPlayback:(BOOL)arg1;
- (BOOL)userSkippedPlayback;
- (double)duration;
- (void)setupPlaybackInfo;
- (void)updateAttributesForDefaultsChange:(id)arg1;
- (id)album;
- (id)artist;
- (id)albumArtist;
- (NSUInteger)countForQueueFeeder;
- (float)defaultPlaybackRate;
- (id)displayableText;
- (BOOL)hasAlternatesForTypes:(NSUInteger)arg1;
- (BOOL)hasArtworkData;
- (BOOL)hasDisplayableText;
- (BOOL)hasPlayedThisSession;
- (BOOL)isOnDemandItem;
- (NSUInteger)indexInQueueFeeder;
- (BOOL)isStreamable;
- (BOOL)isVideoDisabled;
- (id)largeArtworkInfoForTime:(double)arg1;
- (id)mainTitle;
- (id)mediumArtworkInfoForTime:(double)arg1;
- (double)playableDuration;
- (float)playbackRateForLevel:(NSUInteger)arg1 direction:(NSInteger)arg2 paused:(BOOL)arg3;
- (float)scanIntervalForLevel:(NSUInteger)arg1 paused:(BOOL)arg2;
- (void)setHasPlayedThisSession:(BOOL)arg1;
- (void)setIsOnDemandItem:(BOOL)arg1;
- (void)setOverrideDuration:(double)arg1;
- (void)setVideoDisabled:(BOOL)arg1;
- (id)smallArtworkInfoForTime:(double)arg1;
- (id)chapterTimeMarkers;
- (id)artworkTimeMarkers;
- (id)chapterTimeMarkerForTime:(double)arg1;
- (id)artworkTimeMarkerForTime:(double)arg1;
- (id)titlesForTime:(double)arg1;
- (NSUInteger)type;
- (float)userRating;
- (NSUInteger)contentUniqueID;
- (BOOL)wantsSubtitles;
- (void)_delayedInvalidateCachedPlayedDuration;
- (void)_itemAttributeAvailableNotification:(id)arg1;
- (void)_commonInit;
- (void)_updateForNaturalSizeChange;
- (void)_sizeChangedNotification:(id)arg1;
- (id)feeder;
- (void)setFeeder:(id)arg1;
- (id)alternateTracks;

@end