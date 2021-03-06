/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMediaQuery, MPStoreCollectionCompletionOffering, MPStoreOfferMediaItemCollection, NSDictionary, NSURL;

@interface MPStoreCompletionOffering : NSObject <NSCopying> {
    MPStoreCollectionCompletionOffering *_collectionWithCompletionItemsOffering;
    MPMediaQuery *_localItemsQuery;
    int _preferredStoreOfferVariant;
    int _presentationStyle;
    NSDictionary *_responseCollectionDictionary;
    NSURL *_storeURL;
}

@property(readonly) MPStoreOfferMediaItemCollection * collectionWithCompletionItems;
@property int preferredStoreOfferVariant;
@property(readonly) int presentationStyle;
@property(readonly) NSURL * storeURL;

+ (int)defaultOfferVariant;
+ (id)offeringWithCollectionResponseDictionary:(id)arg1 localItemsQuery:(id)arg2;
+ (void)setDefaultOfferVariant:(int)arg1;

- (void).cxx_destruct;
- (void)_loadOfferingData;
- (id)collectionWithCompletionItems;
- (id)copyByInvalidatingCalculatedContent;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithCollectionResponseDictionary:(id)arg1 localItemsQuery:(id)arg2;
- (int)preferredStoreOfferVariant;
- (int)presentationStyle;
- (void)setPreferredStoreOfferVariant:(int)arg1;
- (id)storeURL;

@end
