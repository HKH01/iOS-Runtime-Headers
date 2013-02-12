/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSMutableArray, NSString;

@interface UIKBIdentifierList : NSObject <NSCoding, NSCopying> {
    BOOL m_explicitlySpecified;
    NSMutableArray *m_list;
    NSString *m_name;
}

@property(readonly) unsigned int count;
@property BOOL explicitlySpecified;
@property(readonly) NSArray * list;
@property(copy) NSString * name;

- (void)addIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)explicitlySpecified;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)list;
- (id)name;
- (void)setExplicitlySpecified:(BOOL)arg1;
- (void)setName:(id)arg1;

@end