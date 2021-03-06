/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@class NSString;

@interface BSStackFrameInfo : NSObject {
    unsigned long _address;
    NSString *_className;
    NSString *_executableName;
    NSString *_functionName;
    NSString *_realFunctionName;
}

@property(readonly) unsigned long address;
@property(retain,readonly) NSString * className;
@property(retain,readonly) NSString * executableName;
@property(retain,readonly) NSString * functionName;

- (unsigned long)address;
- (id)className;
- (void)dealloc;
- (id)description;
- (id)executableName;
- (id)functionName;
- (id)initWithReturnAddress:(unsigned long)arg1;

@end
