/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITextChecker, UIView<UITextSelectingContainer>, UILongPressGestureRecognizer, NSMutableArray, UIFieldEditor, UIView, NSMutableSet, UITapGestureRecognizer;

@interface UITextInteractionAssistant : NSObject <UIGestureRecognizerDelegate> {
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    } _autoscrollBasePoint;
    float _autoscrollFactor;
    int _autoscrollRamp;
    } _autoscrollUntransformedExtentPoint;
    BOOL _autoscrolled;
    BOOL _inGesture;
    BOOL _isTryingToHighlightLink;
    NSMutableSet *_linkGestures;
    UILongPressGestureRecognizer *_loupeGesture;
    } _loupeGestureEndPoint;
    NSMutableArray *_recognizers;
    UITapGestureRecognizer *_singleTapGesture;
    UITextChecker *_textChecker;
    UIView<UITextSelectingContainer> *_view;
}

@property struct CGPoint { float x1; float x2; } autoscrollUntransformedExtentPoint;
@property BOOL autoscrolled;
@property(readonly) UIFieldEditor * fieldEditor;
@property BOOL inGesture;
@property(retain) UILongPressGestureRecognizer * loupeGesture;
@property(readonly) UIView * scrollView;
@property(retain) UITapGestureRecognizer * singleTapGesture;
@property(readonly) UIView<UITextSelectingContainer> * view;

- (id)addHighlightLinkRecognizer;
- (id)addLoupeGestureRecognizer:(BOOL)arg1;
- (id)addOneFingerDoubleTapRecognizer:(SEL)arg1;
- (id)addOneFingerDoubleTapRecognizer;
- (id)addOneFingerTapRecognizer:(SEL)arg1;
- (id)addOneFingerTapRecognizer;
- (id)addOneFingerTripleTapRecognizer;
- (id)addPhraseBoundaryGestureRecognizer;
- (id)addSelectionTapRecognizer:(SEL)arg1;
- (id)addSelectionTapRecognizer;
- (id)addTapAndAHalfRecognizer;
- (id)addTapAndHoldOnLinkRecognizer;
- (id)addTwoFingerRangedSelectRecognizer;
- (id)addTwoFingerSingleTapRecognizer;
- (void)attach;
- (struct CGPoint { float x1; float x2; })autoscrollUntransformedExtentPoint;
- (void)autoscrollWillNotStart;
- (BOOL)autoscrolled;
- (void)cancelAutoscroll;
- (void)cancelInteractionWithLink;
- (void)clearGestureRecognizers:(BOOL)arg1;
- (void)clearGestureRecognizers;
- (void)clearSelection;
- (void)confirmMarkedText:(id)arg1;
- (struct CGPoint { float x1; float x2; })constrainedPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)containerIsAtom;
- (BOOL)containerIsPlainStyleAtom;
- (BOOL)containerIsTextField;
- (void)dealloc;
- (void)detach:(BOOL)arg1;
- (void)detach;
- (float)distanceBetweenPoint:(struct CGPoint { float x1; float x2; })arg1 andRange:(id)arg2;
- (void)doubleTapInUneditable:(id)arg1;
- (id)fieldEditor;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)inGesture;
- (id)initWithView:(id)arg1;
- (BOOL)isChineseInputEnabled;
- (BOOL)isInteractingWithLink;
- (void)longDelayRecognizer:(id)arg1;
- (void)loupeGesture:(id)arg1;
- (id)loupeGesture;
- (void)notifyKeyboardSelectionChanged;
- (void)oneFingerDoubleTap:(id)arg1;
- (void)oneFingerTap:(id)arg1;
- (void)oneFingerTapInUneditable:(id)arg1;
- (void)oneFingerTapSelectsAll:(id)arg1;
- (void)oneFingerTripleTap:(id)arg1;
- (id)rangeForTextReplacement:(id)arg1;
- (void)resignedFirstResponder;
- (void)scheduleDictationReplacementsForAlternatives:(id)arg1 range:(id)arg2;
- (void)scheduleReplacementsForRange:(id)arg1 withOptions:(unsigned int)arg2;
- (void)scheduleReplacementsWithOptions:(unsigned int)arg1;
- (id)scrollView;
- (void)selectAll;
- (void)selectWord;
- (void)selectWordWithoutShowingCommands;
- (void)setAutoscrollUntransformedExtentPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setAutoscrolled:(BOOL)arg1;
- (void)setFirstResponderIfNecessary;
- (void)setGestureRecognizers;
- (void)setInGesture:(BOOL)arg1;
- (void)setLoupeGesture:(id)arg1;
- (void)setSelectionWithPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setSingleTapGesture:(id)arg1;
- (BOOL)shouldHandleFormGestureAtLocation:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)shouldHandleOneFingerTapInUneditable:(id)arg1;
- (BOOL)shouldIgnoreLinkGestures;
- (id)singleTapGesture;
- (void)smallDelayRecognizer:(id)arg1;
- (void)startAutoscroll:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)swallowsDoubleTapWithScale:(float)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)tapAndAHalf:(id)arg1;
- (BOOL)tapOnLinkWithGesture:(id)arg1;
- (void)turnOffDrawsAsAtomIfPlainStyleAtom;
- (void)twoFingerRangedSelectGesture:(id)arg1;
- (void)twoFingerSingleTap:(id)arg1;
- (void)updateAutoscroll:(id)arg1;
- (BOOL)useGesturesForEditableContent;
- (id)view;
- (BOOL)viewCouldBecomeEditable:(id)arg1;

@end