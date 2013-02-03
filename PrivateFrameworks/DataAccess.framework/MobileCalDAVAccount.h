/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class CalDAVSettingsTemplate, CalDAVAccount, CalDAVPrincipal, <DAValidityCheckConsumer>, NSMutableSet;

@interface MobileCalDAVAccount : DAAccount {
    CalDAVAccount *_account;
    NSMutableSet *_calendarUserAddresses;
    NSMutableSet *_calendars;
    BOOL _isSpinning;
    NSInteger _preferredDaysToSync;
    CalDAVPrincipal *_principal;
    CalDAVSettingsTemplate *_settingsTemplate;
    <DAValidityCheckConsumer> *_validityConsumer;
}

@property(retain) NSSet *calendars; /* unknown property attribute: V_calendars */
@property(retain) NSSet *calendarUserAddresses; /* unknown property attribute: V_calendarUserAddresses */
@property(retain) CalDAVAccount *account;
@property(retain) NSString *calendarHomePath;
@property(retain) NSString *dropBoxPath;
@property(retain) NSString *fullName;
@property(retain) NSString *inboxPath;
@property(retain) NSString *login;
@property(retain) NSString *notificationsPath;
@property(readonly) NSDate *ocurrenceCacheEndDate;
@property(readonly) NSDate *ocurrenceCacheStartDate;
@property(retain) NSString *outboxPath;
@property(retain) CalDAVPrincipal *principal;
@property(retain) NSURL *principalURL;
@property(retain) NSString *scheme;
@property(retain) NSString *server;
@property CalDAVServerVersion *serverVersion;
@property(readonly) DAVSession *session;
@property(retain) CalDAVSettingsTemplate *settingsTemplate;
@property(readonly) NSTimeZone *viewedTimeZone;
@property NSInteger calDAVAccountVersion;
@property BOOL isWritable;
@property BOOL keepOffline;
@property NSInteger preferredDaysToSync;
@property(readonly) BOOL shouldFilterSyncTimeRange;

+ (Class)accountClass;
+ (Class)clientClass;
+ (id)defaultProperties;
+ (id)supportedDataclasses;

- (id)_powerAssertionContext;
- (id)_powerAssertionGroupIdentifier;
- (void)_setSpinning:(BOOL)arg1;
- (void)_updateCalendarStore:(BOOL)arg1;
- (BOOL)_updateCalendarStoreProperties:(void*)arg1;
- (BOOL)_upgradeSelfFromVersion:(NSInteger)arg1 superClassUpgraded:(BOOL)arg2 accountManager:(id)arg3;
- (id)account;
- (void)addCalendar:(id)arg1;
- (void)addCalendarUserAddress:(id)arg1;
- (NSInteger)calDAVAccountVersion;
- (id)calendarHomePath;
- (id)calendarUserAddresses;
- (id)calendars;
- (void)cancelRefresh;
- (void)checkValidityWithConsumer:(id)arg1;
- (id)dateToSyncFrom;
- (id)dateToSyncTo;
- (void)davSessionShouldAllowTrustInfo:(id)arg1;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (id)dropBoxPath;
- (void)dropPowerAssertions;
- (id)fullName;
- (BOOL)hasCalendarUserAddress:(id)arg1;
- (id)host;
- (id)inboxPath;
- (id)init;
- (id)initWithProperties:(id)arg1;
- (BOOL)isPendingRefresh;
- (BOOL)isRefreshing;
- (BOOL)isWritable;
- (BOOL)keepOffline;
- (id)login;
- (id)notificationsPath;
- (id)ocurrenceCacheEndDate;
- (id)ocurrenceCacheStartDate;
- (id)outboxPath;
- (NSInteger)port;
- (NSInteger)preferredDaysToSync;
- (id)principal;
- (id)principalURL;
- (id)properties;
- (void)reattainPowerAssertions;
- (void)refreshForced:(BOOL)arg1 calendarsOnly:(BOOL)arg2;
- (void)refreshOperation:(id)arg1 didCompleteWithError:(id)arg2;
- (void)releasePowerAssertion;
- (void)removeCalendar:(id)arg1;
- (void)removeCalendarUserAddress:(id)arg1;
- (void)retainPowerAssertion;
- (id)scheme;
- (id)server;
- (id)serverVersion;
- (id)session;
- (void)setAccount:(id)arg1;
- (void)setAccountDescription:(id)arg1;
- (void)setCalDAVAccountVersion:(NSInteger)arg1;
- (void)setCalendarHomePath:(id)arg1;
- (void)setCalendarUserAddresses:(id)arg1;
- (void)setCalendars:(id)arg1;
- (void)setDropBoxPath:(id)arg1;
- (void)setFullName:(id)arg1;
- (void)setHost:(id)arg1;
- (void)setInboxPath:(id)arg1;
- (void)setIsWritable:(BOOL)arg1;
- (void)setKeepOffline:(BOOL)arg1;
- (void)setLogin:(id)arg1;
- (void)setNotificationsPath:(id)arg1;
- (void)setOutboxPath:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setPort:(NSInteger)arg1;
- (void)setPreferredDaysToSync:(NSInteger)arg1;
- (void)setPrincipal:(id)arg1;
- (void)setPrincipalURL:(id)arg1;
- (void)setScheme:(id)arg1;
- (void)setServer:(id)arg1;
- (void)setServerVersion:(id)arg1;
- (void)setSettingsTemplate:(id)arg1;
- (void)setUseSSL:(BOOL)arg1;
- (void)setUsername:(id)arg1;
- (id)settingsTemplate;
- (BOOL)shouldFilterSyncTimeRange;
- (BOOL)supportsAccountType:(NSInteger)arg1;
- (BOOL)upgradeAccountIfNecessaryWithAccountManager:(id)arg1;
- (id)urlForKeychain;
- (BOOL)useSSL;
- (id)username;
- (void)verifyOperationSucceeded:(BOOL)arg1 error:(id)arg2;
- (id)viewedTimeZone;

@end