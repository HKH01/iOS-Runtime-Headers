/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUScriptOperationDelegate, SUScriptSectionsController, SUScriptProtocol, SUScriptApplication, SUWebImagePool, NSString, SUScriptViewController, SUScriptMediaLibrary, SUScriptDevice, SUScriptNotificationObserver, SUScriptWindowContext, <SUScriptInterfaceDelegate>, WebScriptObject, NSNumber, NSMutableDictionary, SUScriptNavigationBar, SUScriptPurchaseManager, SUScriptAccount, SUScriptWindow, SUScriptAddressBook, SUScriptAccountManager, NSArray, NSURL;

@interface SUScriptInterface : SUScriptObject {
    SUScriptAccountManager *_accountManager;
    <SUScriptInterfaceDelegate> *_delegate;
    NSMutableDictionary *_downloadQueues;
    NSURL *_mainFrameURL;
    SUScriptMediaLibrary *_mediaLibrary;
    SUScriptNotificationObserver *_notificationObserver;
    SUScriptPurchaseManager *_purchaseManager;
    SUScriptOperationDelegate *_scriptOperationDelegate;
    SUScriptWindowContext *_scriptWindowContext;
    BOOL _sourceIsTrusted;
    id _threadSafeDelegate;
    SUWebImagePool *_webImagePool;
    WebScriptObject *_windowScriptObject;
}

@property(readonly) NSArray * accounts;
@property(readonly) NSString * actionTypeReturnToLibrary;
@property(readonly) SUScriptAddressBook * addressBook;
@property(readonly) SUScriptApplication * application;
@property(copy) NSString * cookie;
@property <SUScriptInterfaceDelegate> * delegate;
@property(readonly) SUScriptDevice * device;
@property(readonly) id globalRootObject;
@property(readonly) NSArray * installedSoftwareApplications;
@property(readonly) id loggingEnabled;
@property(retain) NSURL * mainFrameURL;
@property(readonly) SUScriptMediaLibrary * mediaLibrary;
@property(readonly) SUScriptNavigationBar * navigationBar;
@property(readonly) NSNumber * orientation;
@property(retain) SUScriptAccount * primaryAccount;
@property(retain) SUScriptAccount * primaryLockerAccount;
@property(readonly) SUScriptProtocol * protocol;
@property(readonly) SUScriptPurchaseManager * purchaseManager;
@property(readonly) id screenReaderRunning;
@property(retain) SUScriptWindowContext * scriptWindowContext;
@property(readonly) SUScriptSectionsController * sectionsController;
@property BOOL sourceIsTrusted;
@property(readonly) <SUScriptInterfaceDelegate> * threadSafeDelegate;
@property(readonly) SUScriptViewController * viewController;
@property(readonly) SUScriptWindow * window;

+ (void)initialize;
+ (id)webScriptNameForKey:(const char *)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (void)_accessibilityPostLayoutChange;
- (id)_className;
- (id)_copyDialogWithMessage:(id)arg1 title:(id)arg2 cancelButtonTitle:(id)arg3 okButtonTitle:(id)arg4;
- (id)_copyGlobalRootObject;
- (struct OpaqueJSContext { }*)_copyJavaScriptContext;
- (id)_copyOrientation;
- (id)_copyScriptViewControllerForParentViewController;
- (void)_enterAccountFlowWithURL:(id)arg1;
- (void)_finishedTest:(id)arg1 extraResults:(id)arg2;
- (void)_globalEventNotification:(id)arg1;
- (void)_gotoStoreURL:(id)arg1 withAuthentication:(BOOL)arg2 forceAuthentication:(BOOL)arg3;
- (BOOL)_isRunningTest;
- (BOOL)_launchedToTest;
- (void)_showMediaPlayerForMediaItem:(id)arg1;
- (void)_startedTest:(id)arg1;
- (void)accessibilityPostLayoutChange;
- (id)accountDSID;
- (id)accountForDSID:(id)arg1;
- (id)accountName;
- (id)accounts;
- (id)actionTypeReturnToLibrary;
- (id)activeNetworkType;
- (void)addExternalDownloads:(id)arg1 options:(id)arg2;
- (void)addExternalDownloads:(id)arg1;
- (void)addExternalDownloadsFromManifestURL:(id)arg1;
- (void)addPurchaseWithInfo:(id)arg1 options:(id)arg2;
- (void)addPurchaseWithInfo:(id)arg1;
- (id)addressBook;
- (id)application;
- (BOOL)arePodcastsDisabled;
- (id)attributeKeys;
- (void)authenticateForAccount:(id)arg1 withOptions:(id)arg2;
- (BOOL)canSendEmail;
- (BOOL)checkCapabilitiesPropertyListString:(id)arg1 showFailureDialog:(BOOL)arg2;
- (void)composeEmailWithSubject:(id)arg1 body:(id)arg2;
- (void)composeReviewWithURL:(id)arg1 itemIdentifier:(id)arg2 type:(id)arg3;
- (id)cookie;
- (struct OpaqueJSContext { }*)copyJavaScriptContext;
- (void)dealloc;
- (void)deallocAuthentication;
- (void)deallocDownloadQueue;
- (void)deallocMediaLibrary;
- (id)delegate;
- (id)device;
- (int)dialogDisplayCountForKey:(id)arg1;
- (id)diskSpaceAvailable;
- (void)dismissSheet;
- (void)dismissWindowsWithOptions:(id)arg1;
- (void)dispatchGlobalEventWithName:(id)arg1 payload:(id)arg2;
- (void)finishedTest:(id)arg1 extraResults:(id)arg2;
- (id)getDownloadQueueWithQueueType:(id)arg1;
- (id)globalRootObject;
- (void)goBack;
- (void)gotoStoreURL:(id)arg1 ofType:(id)arg2 withAuthentication:(BOOL)arg3 forceAuthentication:(BOOL)arg4;
- (void)gotoStoreURL:(id)arg1;
- (void)handleDialogPropertyListString:(id)arg1;
- (void)handleProtocolPropertyListString:(id)arg1;
- (void)handleRootObjectWithPropertyListString:(id)arg1;
- (void)handleTrackListWithPropertyListString:(id)arg1;
- (id)hardwareType;
- (BOOL)haveAccount;
- (id)imagePool;
- (id)init;
- (void)initAuthentication;
- (id)installedSoftwareApplications;
- (BOOL)isExplicitContentDisabled;
- (BOOL)isRunningTest;
- (BOOL)launchedToTest;
- (void)log:(id)arg1;
- (id)loggingEnabled;
- (id)mainFrameURL;
- (id)makeAccount;
- (id)makeAccountPageWithURLs:(id)arg1;
- (id)makeButtonWithSystemItemString:(id)arg1 action:(id)arg2;
- (id)makeButtonWithTitle:(id)arg1 action:(id)arg2;
- (id)makeCanvasWithWidth:(id)arg1 height:(id)arg2;
- (id)makeColorWithHue:(id)arg1 saturation:(id)arg2 brightness:(id)arg3 alpha:(id)arg4;
- (id)makeColorWithRed:(id)arg1 green:(id)arg2 blue:(id)arg3 alpha:(id)arg4;
- (id)makeColorWithWhite:(id)arg1 alpha:(id)arg2;
- (id)makeComposeReviewViewControllerWithReview:(id)arg1;
- (id)makeDateFormatter;
- (id)makeDialog;
- (id)makeDocumentInteractionController;
- (id)makeLinearGradientWithX0:(float)arg1 y0:(float)arg2 x1:(float)arg3 y1:(float)arg4;
- (id)makeMediaPlayerItemWithProperties:(id)arg1;
- (id)makeMediaPlayerViewControllerWithMediaPlayerItem:(id)arg1;
- (id)makeMenuViewController;
- (id)makeMessage;
- (id)makeMessageEntryViewController;
- (id)makeNavigationControllerWithRootViewController:(id)arg1;
- (id)makeNumberFormatterWithStyle:(id)arg1;
- (id)makePopOverWithViewController:(id)arg1;
- (id)makeRadialGradientWithX0:(float)arg1 y0:(float)arg2 r0:(float)arg3 x1:(float)arg4 y1:(float)arg5 r1:(float)arg6;
- (id)makeReportAProblemViewControllerWithAdamID:(id)arg1;
- (id)makeReviewWithAdamID:(id)arg1;
- (id)makeScriptActionWithType:(id)arg1;
- (id)makeScriptImagePickerController;
- (id)makeSegmentedControl;
- (id)makeSplitViewController;
- (id)makeStorePageWithURLs:(id)arg1;
- (id)makeTextFieldWithStyle:(id)arg1 placeholder:(id)arg2 value:(id)arg3 width:(id)arg4;
- (id)makeURLRequestWithURLs:(id)arg1 timeoutInterval:(id)arg2;
- (id)makeVolumeViewController;
- (id)makeWindow;
- (id)mediaLibrary;
- (id)navigationBar;
- (void)openURL:(id)arg1;
- (id)orientation;
- (id)parentViewController;
- (void)performPurchaseAnimationForIdentifier:(id)arg1;
- (void)pingURL:(id)arg1;
- (id)primaryAccount;
- (id)primaryLockerAccount;
- (id)protocol;
- (id)purchaseManager;
- (void)redeemCode:(id)arg1;
- (void)registerNavBarButtonWithTitle:(id)arg1 side:(id)arg2 function:(id)arg3;
- (void)reloadFooterSection:(id)arg1 withURL:(id)arg2;
- (void)reportAProblemForIdentifier:(id)arg1;
- (void)retryAllRestoreDownloads;
- (id)screenReaderRunning;
- (id)scriptAttributeKeys;
- (id)scriptWindowContext;
- (id)sectionsController;
- (void)selectSectionWithIdentifier:(id)arg1;
- (void)selectTrackListItemWithIdentifier:(id)arg1;
- (void)sendPostOfType:(id)arg1 withOptions:(id)arg2;
- (void)setAccounts:(id)arg1;
- (void)setCookie:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)setGlobalRootObject:(id)arg1;
- (void)setLibraryIdentifierWithType:(id)arg1 value:(id)arg2;
- (void)setLoggingEnabled:(id)arg1;
- (void)setMainFrameURL:(id)arg1;
- (void)setMediaLibrary:(id)arg1;
- (void)setNavigationBar:(id)arg1;
- (void)setOrientation:(id)arg1;
- (void)setPrimaryAccount:(id)arg1;
- (void)setPrimaryLockerAccount:(id)arg1;
- (void)setProtocol:(id)arg1;
- (void)setScriptWindowContext:(id)arg1;
- (void)setSectionsController:(id)arg1;
- (void)setSourceIsTrusted:(BOOL)arg1;
- (void)setViewController:(id)arg1;
- (void)setWindow:(id)arg1;
- (void)setWindowScriptObject:(id)arg1;
- (BOOL)shouldRestrictContentOfSystem:(id)arg1 level:(id)arg2;
- (void)showAlertWithMessage:(id)arg1 title:(id)arg2 buttonTitle:(id)arg3;
- (BOOL)showConfirmWithMessage:(id)arg1 title:(id)arg2 okButtonTitle:(id)arg3 cancelButtonTitle:(id)arg4;
- (void)showMediaPlayerWithURLString:(id)arg1 orientation:(id)arg2 title:(id)arg3 subtitle:(id)arg4 bookmarkID:(id)arg5 duration:(id)arg6 type:(id)arg7 imageURL:(id)arg8;
- (void)showMediaPreviewWithURLString:(id)arg1;
- (void)showMediaPreviewWithURLString:(id)arg1;
- (id)showPromptWithMessage:(id)arg1 initialValue:(id)arg2 title:(id)arg3 okButtonTitle:(id)arg4 cancelButtonTitle:(id)arg5;
- (void)signOutPrimaryAccount;
- (id)softwareApplicationWithAdamID:(id)arg1;
- (BOOL)sourceIsTrusted;
- (void)startedTest:(id)arg1;
- (id)systemItemAction;
- (id)systemItemAdd;
- (id)systemItemBookmarks;
- (id)systemItemCamera;
- (id)systemItemCancel;
- (id)systemItemCompose;
- (id)systemItemDone;
- (id)systemItemEdit;
- (id)systemItemFastForward;
- (id)systemItemFixedSpace;
- (id)systemItemFlexibleSpace;
- (id)systemItemOrganize;
- (id)systemItemPageCurl;
- (id)systemItemPause;
- (id)systemItemPlay;
- (id)systemItemRedo;
- (id)systemItemRefresh;
- (id)systemItemReplay;
- (id)systemItemRewind;
- (id)systemItemSearch;
- (id)systemItemStop;
- (id)systemItemTrash;
- (id)systemItemUndo;
- (id)systemVersion;
- (id)threadSafeDelegate;
- (id)viewController;
- (id)window;

@end