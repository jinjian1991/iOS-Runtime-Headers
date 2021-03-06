/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
 */

@class AMSBTLEPeripheral, NSString, NSTimer, UIViewController<PeripheralForgottenDelegate><PeripheralConnectionStateDelegate>;

@interface CABTMIDICentralDetailViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, BTLEConnectionTable> {
    AMSBTLEPeripheral *_detailItem;
    UIViewController<PeripheralForgottenDelegate><PeripheralConnectionStateDelegate> *_viewController;
    NSTimer *connectionTimer;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(retain) AMSBTLEPeripheral * detailItem;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property(retain) UIViewController<PeripheralForgottenDelegate><PeripheralConnectionStateDelegate> * viewController;

+ (id)getLocalizedString:(id)arg1 expectedResult:(id)arg2;

- (void)connectSwitchChanged:(id)arg1;
- (id)detailItem;
- (void)didReceiveMemoryWarning;
- (void)forgetDevice:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)setDetailItem:(id)arg1;
- (void)setUIEnabled:(BOOL)arg1;
- (void)setViewController:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (void)timeOutTimerFired:(id)arg1;
- (id)title;
- (void)updatePeripheralTable;
- (id)viewController;
- (void)viewDidLoad;

@end
