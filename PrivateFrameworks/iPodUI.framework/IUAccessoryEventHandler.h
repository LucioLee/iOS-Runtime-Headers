/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@interface IUAccessoryEventHandler : NSObject {
    unsigned int _accessoryEventKeyHeldHandled : 1;
    unsigned int _accessoryKeyRepeatTimerActive : 1;
    unsigned int _accessoryKeyTimerIsForKeyHeld : 1;
    double _accessoryEventButtonDownTime;
    unsigned int _accessoryEventRepeatCount;
    void *_commandObserver;
    BOOL _handlingSimpleRemoteEvent;
}

@property(getter=isHandlingRemoteEvent,readonly) BOOL handlingRemoteEvent;
@property(getter=isHandlingSimpleRemoteEvent,readonly) BOOL handlingSimpleRemoteEvent;
@property(getter=isPlayingSingleMovie,readonly) BOOL playingSingleMovie;

+ (id)sharedInstance;

- (void)_endHandlingSimpleRemoteEvent;
- (BOOL)_handleEventWithHandler:(SEL)arg1 ifCurrentItemType:(unsigned int)arg2;
- (BOOL)_setupMusicSoundController;
- (void)_switchToPlaylistContextForSpecifier:(id)arg1;
- (BOOL)_togglePlaybackWouldPlayMusicSoundController;
- (BOOL)acceptRemoteNavigationCommand;
- (void)dealloc;
- (BOOL)handleAlbumSeek:(int)arg1;
- (BOOL)handleChangeChapterEvent:(int)arg1;
- (BOOL)handleChangeTrackEvent:(int)arg1 deltaType:(int)arg2;
- (BOOL)handleChangeTrackEvent:(int)arg1;
- (void)handleDownArrowEvent;
- (void)handleFastForwardEventWithSeconds:(double)arg1;
- (BOOL)handleMenuEvent;
- (BOOL)handlePauseEvent;
- (BOOL)handlePlayEvent;
- (BOOL)handlePlaylistSeek:(int)arg1;
- (BOOL)handleRepeatAdvanceEvent;
- (void)handleRewindEventWithSeconds:(double)arg1;
- (BOOL)handleSeekBeginEvent:(int)arg1;
- (BOOL)handleSeekEndEvent;
- (void)handleSelectEvent;
- (BOOL)handleShuffleAdvanceEvent;
- (void)handleSimpleRemoteAction:(int)arg1 withContext:(int)arg2 trackID:(long long)arg3;
- (BOOL)handleStopEvent;
- (BOOL)handleTogglePlaybackEvent;
- (void)handleUpArrowEvent;
- (id)init;
- (BOOL)isHandlingRemoteEvent;
- (BOOL)isHandlingSimpleRemoteEvent;
- (BOOL)isPlayingSingleMovie;

@end