/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class NSString, UIColor;

@interface BBColor : NSObject <BBUniquableObject, NSSecureCoding, NSCopying> {
    float _alpha;
    float _blue;
    float _green;
    float _red;
}

@property(readonly) float alpha;
@property(readonly) float blue;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) float green;
@property(readonly) unsigned int hash;
@property(readonly) float red;
@property(readonly) Class superclass;
@property(copy,readonly) UIColor * uiColor;

+ (id)colorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
+ (BOOL)supportsSecureCoding;

- (id)_initWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
- (float)alpha;
- (float)blue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (float)green;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (float)red;
- (id)uiColor;
- (id)uniqueIdentifier;

@end
