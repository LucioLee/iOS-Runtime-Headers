/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSTimer, TPDocumentRoot;

@interface TPTextWrapController : NSObject <TSWPTextWrap> {
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    } _canvasSpaceToWrapSpace;
    TPDocumentRoot *_documentRoot;
    BOOL _wrapAnimationEnabled;
    NSTimer *_wrapAnimationTimer;
    } _wrapSpaceToCanvasSpace;
}

+ (struct CGPoint { float x1; float x2; })p_baseWrappablePoint;

- (id).cxx_construct;
- (id)beginWrappingToColumn:(id)arg1 target:(id)arg2 hasWrapables:(BOOL*)arg3;
- (void)dealloc;
- (id)initWithDocumentRoot:(id)arg1;
- (float)nextUnobstructedSpanStartingAt:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 wrappableAttachments:(id)arg2 userInfo:(id)arg3;
- (void)p_animateWrap;
- (id)p_groupInfoContainingWrappable:(id)arg1;
- (void)p_setWrapAnimationPhase:(double)arg1;
- (BOOL)p_shouldTextFlowAroundWrappable:(id)arg1 inTarget:(id)arg2 inColumn:(id)arg3;
- (unsigned int)p_splitLine:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 lineSegmentRects:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }[128])arg2 wrappable:(id)arg3 cookie:(id)arg4;
- (unsigned int)splitLine:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 lineSegmentRects:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }[128])arg2 wrappableAttachments:(id)arg3 ignoreFloatingGraphics:(BOOL)arg4 floatingCausedWrap:(BOOL*)arg5 skipHint:(float*)arg6 userInfo:(id)arg7;
- (void)stopAnimation;
- (void)toggleWrapAnimation;

@end