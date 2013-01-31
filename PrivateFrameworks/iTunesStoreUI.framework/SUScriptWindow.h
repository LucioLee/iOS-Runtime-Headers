/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUScriptWindowContext, WebScriptObject, SUScriptFunction, NSString, SUScriptViewController, SUScriptCanvasFunction, NSNumber;

@interface SUScriptWindow : SUScriptObject  {
    SUScriptViewController *_backViewController;
    BOOL _canSwipeToDismiss;
    SUScriptWindowContext *_context;
    SUScriptViewController *_frontViewController;
    id _height;
    SUScriptCanvasFunction *_maskFunction;
    id _shadowOpacity;
    id _shadowRadius;
    SUScriptFunction *_shouldDismissFunction;
    id _width;
}

@property(readonly) SUScriptWindowContext * context;
@property(copy) id canSwipeToDismiss;
@property(retain) SUScriptViewController * backViewController;
@property(retain) SUScriptViewController * frontViewController;
@property(retain) NSNumber * height;
@property(retain) WebScriptObject * maskFunction;
@property(retain) NSNumber * shadowOpacity;
@property(retain) NSNumber * shadowRadius;
@property(retain) WebScriptObject * shouldDismissFunction;
@property(readonly) NSString * style;
@property(retain) NSNumber * width;
@property(readonly) SUScriptViewController * windowParentViewController;

+ (void)dismissWindowsWithOptions:(id)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (void)initialize;

- (id)windowParentViewController;
- (void)setMaskFunction:(id)arg1;
- (id)maskFunction;
- (void)flip:(id)arg1;
- (void)dismiss:(id)arg1;
- (void)_overlayDidShowNotification:(id)arg1;
- (void)_overlayDidFlipNotification:(id)arg1;
- (void)_overlayDidDismissNotification:(id)arg1;
- (id)shouldDismissFunction;
- (id)shadowRadius;
- (id)shadowOpacity;
- (struct CGSize { float x1; float x2; })_overlaySize;
- (id)frontViewController;
- (id)canSwipeToDismiss;
- (id)backViewController;
- (void)setShouldDismissFunction:(id)arg1;
- (void)setFrontViewController:(id)arg1;
- (void)setCanSwipeToDismiss:(id)arg1;
- (id)_newOverlayTransitionWithOptions:(id)arg1;
- (id)_overlayViewController:(BOOL)arg1;
- (id)_backgroundViewController:(BOOL)arg1;
- (id)_copySafeTransitionOptionsFromOptions:(id)arg1;
- (void)_registerForOverlayNotifications;
- (void)setBackViewController:(id)arg1;
- (id)_className;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
- (void)dealloc;
- (id)init;
- (void)setHeight:(id)arg1;
- (id)height;
- (void)setShadowRadius:(id)arg1;
- (void)setShadowOpacity:(id)arg1;
- (void)show:(id)arg1;
- (id)style;
- (void)setWidth:(id)arg1;
- (id)width;
- (id)context;
- (id)initWithContext:(id)arg1;

@end