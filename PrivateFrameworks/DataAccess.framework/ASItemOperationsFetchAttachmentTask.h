/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

@class NSString;

@interface ASItemOperationsFetchAttachmentTask : ASTask <ASFetchAttachmentTaskProtocol> {
    NSString *_attachmentName;
    NSString *_messageServerID;
}

- (id)attachmentName;
- (int)commandCode;
- (void)dealloc;
- (void)finishWithError:(id)arg1;
- (BOOL)getTopLevelToken:(char *)arg1 outStatusCodePage:(char *)arg2 outStatusToken:(char *)arg3;
- (int)handleStreamOperation:(int)arg1 forCodePage:(int)arg2 tag:(int)arg3 withParentItem:(id)arg4 withData:(char *)arg5 dataLength:(int)arg6;
- (id)initForMessageServerID:(id)arg1 andAttachmentName:(id)arg2;
- (id)messageID;
- (BOOL)processContext:(id)arg1;
- (id)requestBody;

@end