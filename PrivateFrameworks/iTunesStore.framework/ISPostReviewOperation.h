/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class ISReview;



@interface ISPostReviewOperation : ISOperation <ISURLOperationDelegate>
{
    BOOL _backgroundReview;
    unsigned long long _itemIdentifier;
    ISReview *_review;
}

@property(retain) ISReview *review; /* unknown property attribute: V_review */
@property unsigned long long itemIdentifier; /* unknown property attribute: V_itemIdentifier */
@property(getter=isBackgroundReview) BOOL backgroundReview; /* unknown property attribute: V_backgroundReview */

+ (BOOL)setRating:(float)arg1 forApplicationAtPath:(id)arg2;

- (void)dealloc;
- (void)run;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (id)_httpBody;
- (id)review;
- (void)setReview:(id)arg1;
- (unsigned long long)itemIdentifier;
- (void)setItemIdentifier:(unsigned long long)arg1;
- (BOOL)isBackgroundReview;
- (void)setBackgroundReview:(BOOL)arg1;

@end