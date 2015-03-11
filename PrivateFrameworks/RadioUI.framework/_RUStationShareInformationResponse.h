/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@class NSError, RadioShareInformation;

@interface _RUStationShareInformationResponse : NSObject {
    NSError *_error;
    RadioShareInformation *_shareInformation;
}

@property(readonly) NSError * error;
@property(readonly) RadioShareInformation * shareInformation;

- (void).cxx_destruct;
- (id)error;
- (id)initWithShareInformation:(id)arg1 error:(id)arg2;
- (id)shareInformation;

@end