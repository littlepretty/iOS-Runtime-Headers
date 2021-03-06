/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOStructuredAddress, NSMutableArray;

@interface GEOAddress : PBCodable <NSCopying> {
    struct { 
        unsigned int formattedAddressType : 1; 
    NSMutableArray *_formattedAddressLines;
    int _formattedAddressType;
    } _has;
    GEOStructuredAddress *_structuredAddress;
}

@property(retain) NSMutableArray * formattedAddressLines;
@property int formattedAddressType;
@property BOOL hasFormattedAddressType;
@property(readonly) BOOL hasStructuredAddress;
@property(retain) GEOStructuredAddress * structuredAddress;

- (void)addFormattedAddressLine:(id)arg1;
- (id)addressDictionary;
- (void)clearFormattedAddressLines;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)formattedAddressLineAtIndex:(unsigned int)arg1;
- (id)formattedAddressLines;
- (unsigned int)formattedAddressLinesCount;
- (int)formattedAddressType;
- (BOOL)hasFormattedAddressType;
- (BOOL)hasStructuredAddress;
- (unsigned int)hash;
- (id)initWithAddressDictionary:(id)arg1;
- (id)initWithAddressString:(id)arg1;
- (id)initWithPlacemark:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setFormattedAddressLines:(id)arg1;
- (void)setFormattedAddressType:(int)arg1;
- (void)setHasFormattedAddressType:(BOOL)arg1;
- (void)setStructuredAddress:(id)arg1;
- (id)singleLineAddress;
- (id)structuredAddress;
- (void)writeTo:(id)arg1;

@end
