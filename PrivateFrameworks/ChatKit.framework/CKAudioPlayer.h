/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <CKAudioPlayerDelegate>, AVAudioPlayer, CADisplayLink, CKMediaObject, NSString;

@interface CKAudioPlayer : NSObject <AVAudioPlayerDelegate> {
    AVAudioPlayer *_audioPlayer;
    id _block;
    <CKAudioPlayerDelegate> *_delegate;
    CADisplayLink *_displayLink;
    CKMediaObject *_mediaObject;
    double _prevCurrentTime;
}

@property(retain) AVAudioPlayer * audioPlayer;
@property id block;
@property(readonly) double currentTime;
@property(copy,readonly) NSString * debugDescription;
@property <CKAudioPlayerDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(retain) CADisplayLink * displayLink;
@property(readonly) double duration;
@property(readonly) unsigned int hash;
@property(retain) CKMediaObject * mediaObject;
@property(getter=isPlaying,readonly) BOOL playing;
@property double prevCurrentTime;
@property(readonly) Class superclass;

- (id)audioPlayer;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2;
- (id)block;
- (double)currentTime;
- (void)dealloc;
- (id)delegate;
- (id)displayLink;
- (void)displayLinkFired:(id)arg1;
- (double)duration;
- (id)initWithFileURL:(id)arg1;
- (id)initWithMediaObject:(id)arg1;
- (BOOL)isPlaying;
- (id)mediaObject;
- (void)pause;
- (void)play;
- (void)playWithCompletionBlock:(id)arg1;
- (double)prevCurrentTime;
- (void)setAudioPlayer:(id)arg1;
- (void)setBlock:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayLink:(id)arg1;
- (void)setMediaObject:(id)arg1;
- (void)setPrevCurrentTime:(double)arg1;
- (void)stop;

@end