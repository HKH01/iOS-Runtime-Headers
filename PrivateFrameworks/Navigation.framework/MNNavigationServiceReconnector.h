/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNNavigationServiceReconnector : NSObject {
    <MNNavigationServiceReconnectorDelegate> * _delegate;
    MNRoutePlanningDetails * _routePlanningDetails;
}

@property (nonatomic) <MNNavigationServiceReconnectorDelegate> *delegate;

- (void).cxx_destruct;
- (bool)_isValidRoutePlanningDetails:(id)arg1;
- (id)delegate;
- (void)finishReconnecting;
- (id)initWithRoutePlanningDetails:(id)arg1;
- (bool)isReconnecting;
- (bool)reconnect;
- (void)setDelegate:(id)arg1;

@end
