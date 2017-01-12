/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationViewController : UIViewController <NCContentSizeCategoryAdjusting, NCNotificationCustomContentDelegate, UIScrollViewDelegate> {
    <UIViewControllerTransitionCoordinator> * _activeTransitionCoordinator;
    UIView * _associatedView;
    BOOL  _canPan;
    <NCNotificationCustomContentProviding> * _customContentProvider;
    UIViewController<NCNotificationCustomContent> * _customContentProvidingViewController;
    <NCNotificationViewControllerDelegate> * _delegate;
    BOOL  _didQueryCanPan;
    BOOL  _interactionEnabled;
    struct UIView { Class x1; } * _lookView;
    int  _ncTransitionAnimationState;
    NCNotificationRequest * _notificationRequest;
    NCNotificationAction * _presentationSourceAction;
    BOOL  _revealAdditionalContentOnPresentation;
    UIScrollView * _scrollView;
    BOOL  _shouldRestorePresentingShortLookOnDismiss;
    <NCNotificationStaticContentProviding> * _staticContentProvider;
}

@property (getter=_activeTransitionCoordinator, setter=_setActiveTransitionCoordinator:, nonatomic, retain) <UIViewControllerTransitionCoordinator> *activeTransitionCoordinator;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (nonatomic) UIView *associatedView;
@property (getter=hasCommittedToPresentingCustomContentProvidingViewController, nonatomic, readonly) BOOL committedToPresentingCustomContentProvidingViewController;
@property (nonatomic, retain) <NCNotificationCustomContentProviding> *customContentProvider;
@property (getter=_customContentProvidingViewController, setter=_setCustomContentProvidingViewController:, nonatomic, retain) UIViewController<NCNotificationCustomContent> *customContentProvidingViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NCNotificationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isDragging, nonatomic, readonly) BOOL dragging;
@property (readonly) unsigned int hash;
@property (getter=isInteractionEnabled, nonatomic) BOOL interactionEnabled;
@property (getter=isLookStyleLongLook, nonatomic, readonly) BOOL lookStyleLongLook;
@property (nonatomic, retain) NCNotificationRequest *notificationRequest;
@property (getter=_notificationViewControllerView, nonatomic, readonly) _NCNotificationViewControllerView *notificationViewControllerView;
@property (nonatomic, copy) NSString *preferredContentSizeCategory;
@property (nonatomic) NCNotificationAction *presentationSourceAction;
@property (getter=_isPresentingCustomContentProvidingViewController, nonatomic, readonly) BOOL presentingCustomContentProvidingViewController;
@property (nonatomic) BOOL revealAdditionalContentOnPresentation;
@property (getter=_scrollView, nonatomic, readonly) UIScrollView *scrollView;
@property (getter=isShortLook, nonatomic, readonly) BOOL shortLook;
@property (getter=_shouldRestorePresentingShortLookOnDismiss, setter=_setShouldRestorePresentingShortLookOnDismiss:, nonatomic) BOOL shouldRestorePresentingShortLookOnDismiss;
@property (nonatomic, retain) <NCNotificationStaticContentProviding> *staticContentProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_activeTransitionCoordinator;
- (void)_askDelegateToExecuteAction:(id)arg1 withParameters:(id)arg2 animated:(BOOL)arg3;
- (BOOL)_canPan;
- (void)_configureScrollViewIfNecessary;
- (id)_customContentProvidingViewController;
- (int)_dateFormatStyle;
- (void)_executeCancelAction:(BOOL)arg1;
- (void)_executeClearAction:(BOOL)arg1;
- (void)_executeCloseAction:(BOOL)arg1;
- (void)_executeDefaultAction:(BOOL)arg1;
- (id)_initWithNotificationRequest:(id)arg1 revealingAdditionalContentOnPresentation:(BOOL)arg2;
- (BOOL)_isPresentingCustomContentProvidingViewController;
- (void)_loadLookView;
- (struct UIView { Class x1; }*)_longLookView;
- (struct UIView { Class x1; }*)_longLookViewIfLoaded;
- (struct UIView { Class x1; }*)_longLookViewLoadingIfNecessary:(BOOL)arg1;
- (struct UIView { Class x1; }*)_lookView;
- (struct UIView { Class x1; }*)_lookViewIfLoaded;
- (struct UIView { Class x1; }*)_lookViewLoadingIfNecessary:(BOOL)arg1;
- (id)_notificationViewControllerView;
- (void)_notificationViewControllerViewDidLoad;
- (struct CGSize { float x1; float x2; })_preferredCustomContentSizeForSize:(struct CGSize { float x1; float x2; })arg1 parentContentContainerBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (id)_presentedLongLookViewController;
- (id)_scrollView;
- (void)_setActiveTransitionCoordinator:(id)arg1;
- (void)_setCustomContentProvidingViewController:(id)arg1;
- (BOOL)_setDelegate:(id)arg1;
- (BOOL)_setNotificationRequest:(id)arg1;
- (void)_setPreferredCustomContentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_setShouldRestorePresentingShortLookOnDismiss:(BOOL)arg1;
- (void)_setupCustomContentProvider;
- (void)_setupStaticContentProvider;
- (BOOL)_shouldPadScrollViewContentSizeHeight;
- (BOOL)_shouldRestorePresentingShortLookOnDismiss;
- (void)_updatePreferredContentSize;
- (void)_updateScrollViewContentSize;
- (void)_updateWithProvidedCustomContent;
- (void)_updateWithProvidedStaticContent;
- (void)addAudioAccessoryObserver:(id)arg1;
- (BOOL)adjustForContentSizeCategoryChange;
- (BOOL)adjustsFontForContentSizeCategory;
- (id)associatedView;
- (void)contentProvider:(id)arg1 performAction:(id)arg2 animated:(BOOL)arg3;
- (void)customContent:(id)arg1 forwardAction:(id)arg2 forNotification:(id)arg3 withUserInfo:(id)arg4;
- (void)customContent:(id)arg1 requestPermissionToExecuteAction:(id)arg2 forNotification:(id)arg3 withUserInfo:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)customContentProvider;
- (void)customContentRequestsDismiss:(id)arg1;
- (id)debugDescription;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)didReceiveNotificationRequest:(id)arg1;
- (BOOL)dismissPresentedViewControllerAndClearNotification:(BOOL)arg1 animated:(BOOL)arg2;
- (void)dismissViewControllerWithTransition:(int)arg1 completion:(id /* block */)arg2;
- (void)expandAndPlayAudioMessage;
- (BOOL)hasCommittedToPresentingCustomContentProvidingViewController;
- (id)initWithNotificationRequest:(id)arg1;
- (id)initWithNotificationRequest:(id)arg1 revealingAdditionalContentOnPresentation:(BOOL)arg2;
- (BOOL)isContentExtensionVisible:(id)arg1;
- (BOOL)isDragging;
- (BOOL)isInteractionEnabled;
- (BOOL)isLookStyleLongLook;
- (BOOL)isShortLook;
- (void)loadView;
- (int)ncTransitionAnimationState;
- (id)notificationRequest;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)presentLongLook:(id /* block */)arg1;
- (void)presentLongLookAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (id)presentationSourceAction;
- (void)reloadStaticContentProvider;
- (void)removeAudioAccesoryObserver:(id)arg1;
- (BOOL)revealAdditionalContentOnPresentation;
- (void)setAdjustsFontForContentSizeCategory:(BOOL)arg1;
- (void)setAssociatedView:(id)arg1;
- (void)setCustomContentProvider:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHasUpdatedContent;
- (void)setInteractionEnabled:(BOOL)arg1;
- (void)setNCTransitionAnimationState:(int)arg1;
- (void)setNotificationRequest:(id)arg1;
- (void)setPresentationSourceAction:(id)arg1;
- (void)setRevealAdditionalContentOnPresentation:(BOOL)arg1;
- (void)setStaticContentProvider:(id)arg1;
- (BOOL)shouldAutorotate;
- (BOOL)shouldRestorePresentingShortLookOnDismiss;
- (id)staticContentProvider;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (unsigned int)supportedInterfaceOrientations;
- (void)transitionManager:(id)arg1 shouldFinishInteractionWithCompletionBlock:(id /* block */)arg2;
- (void)updateContent;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;

@end