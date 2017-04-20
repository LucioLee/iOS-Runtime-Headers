/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBSetAudioSourceInCarIntent : PBCodable <NSCopying> {
    int  _audioSource;
    struct { 
        unsigned int audioSource : 1; 
        unsigned int relativeAudioSourceReference : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    int  _relativeAudioSourceReference;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) int audioSource;
@property (nonatomic) BOOL hasAudioSource;
@property (nonatomic, readonly) BOOL hasIntentMetadata;
@property (nonatomic) BOOL hasRelativeAudioSourceReference;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic) int relativeAudioSourceReference;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)options;

- (void).cxx_destruct;
- (int)StringAsAudioSource:(id)arg1;
- (int)StringAsRelativeAudioSourceReference:(id)arg1;
- (int)audioSource;
- (id)audioSourceAsString:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAudioSource;
- (BOOL)hasIntentMetadata;
- (BOOL)hasRelativeAudioSourceReference;
- (unsigned int)hash;
- (id)intentMetadata;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)relativeAudioSourceReference;
- (id)relativeAudioSourceReferenceAsString:(int)arg1;
- (void)setAudioSource:(int)arg1;
- (void)setHasAudioSource:(BOOL)arg1;
- (void)setHasRelativeAudioSourceReference:(BOOL)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setRelativeAudioSourceReference:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow

+ (id)fromJSONProtoDictionary:(id)arg1;

- (id)toJSONProtoDictionary;

@end