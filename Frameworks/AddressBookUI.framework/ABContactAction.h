/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABContactActionDelegate>, CNContact, CNContactStyle, NSString, UIColor;

@interface ABContactAction : NSObject {
    UIColor *_color;
    CNContact *_contact;
    CNContactStyle *_contactStyle;
    <ABContactActionDelegate> *_delegate;
    BOOL _destructive;
    SEL _selector;
    id _target;
    NSString *_title;
    int _transportType;
}

@property(retain) UIColor * color;
@property(retain) CNContact * contact;
@property(retain) CNContactStyle * contactStyle;
@property <ABContactActionDelegate> * delegate;
@property(getter=isDestructive) BOOL destructive;
@property(readonly) SEL selector;
@property(retain,readonly) id target;
@property(copy,readonly) NSString * title;
@property int transportType;

+ (id)contactActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 destructive:(BOOL)arg4;
+ (id)contactActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3;

- (id)color;
- (id)contact;
- (id)contactStyle;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)initWithContact:(id)arg1;
- (id)initWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 destructive:(BOOL)arg4;
- (BOOL)isDestructive;
- (void)performActionWithSender:(id)arg1;
- (SEL)selector;
- (void)setColor:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setContactStyle:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDestructive:(BOOL)arg1;
- (void)setTransportType:(int)arg1;
- (id)target;
- (id)title;
- (int)transportType;

@end
