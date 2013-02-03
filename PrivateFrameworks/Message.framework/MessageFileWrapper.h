/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSMutableDictionary, NSString, NSData;

@interface MessageFileWrapper : NSObject {
    NSMutableDictionary *_attributes;
    NSData *_data;
    NSString *_filename;
    NSString *_linkDestination;
    NSString *_path;
    NSString *_preferredFilename;
    NSInteger _type;
    NSString *_url;
}

+ (id)_supportedImageFileExtensions;

- (id)URL;
- (id)contentID;
- (BOOL)couldConfuseWindowsClients;
- (unsigned long)creator;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (id)fileAttributes;
- (id)fileWrappers;
- (id)filename;
- (unsigned short)finderFlags;
- (NSUInteger)imageBytes;
- (id)inferredMimeType;
- (id)initRegularFileWithContents:(id)arg1;
- (id)initSymbolicLinkWithDestination:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithPath:(id)arg1;
- (BOOL)isDirectory;
- (BOOL)isDisplayableByWebKit;
- (BOOL)isImageFile;
- (BOOL)isMedia;
- (BOOL)isPlaceholder;
- (BOOL)isRegularFile;
- (BOOL)isSymbolicLink;
- (id)meetingID;
- (id)messageID;
- (id)mimeType;
- (float)minimumZoomFontSize;
- (id)preferredFilename;
- (id)preferredFilenameStrippingZip;
- (id)preferredFilenameWithoutHiddenExtension;
- (id)regularFileContents;
- (id)resourceForkData;
- (id)savedPath;
- (void)setContentID:(id)arg1;
- (void)setCreator:(unsigned long)arg1;
- (void)setFileAttributes:(id)arg1;
- (void)setFilename:(id)arg1;
- (void)setFinderFlags:(unsigned short)arg1;
- (void)setMeetingID:(id)arg1;
- (void)setMessageID:(id)arg1;
- (void)setMimeType:(id)arg1;
- (void)setPreferredFilename:(id)arg1;
- (void)setResourceForkData:(id)arg1;
- (void)setSavedPath:(id)arg1;
- (void)setShouldBeViewedInline:(BOOL)arg1;
- (void)setShouldHideExtension:(BOOL)arg1;
- (void)setType:(unsigned long)arg1;
- (void)setURL:(id)arg1;
- (BOOL)shouldBeViewedInline;
- (BOOL)shouldHideExtension;
- (id)symbolicLinkDestination;
- (id)tmpFullPath;
- (unsigned long)type;
- (BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2 updateFilenames:(BOOL)arg3;

@end