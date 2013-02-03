/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSMutableArray;

@interface SSOperationProgress : NSObject <NSCopying> {
    BOOL _canPause;
    double _changeRate;
    long long _currentValue;
    double _estimatedTimeRemaining;
    long long _maxValue;
    long long _normalizedCurrentValue;
    long long _normalizedMaxValue;
    NSInteger _operationType;
    NSMutableArray *_snapshotTimes;
    NSMutableArray *_snapshotValues;
    NSInteger _units;
}

@property BOOL canPause;
@property double changeRate;
@property long long currentValue;
@property double estimatedTimeRemaining;
@property long long maxValue;
@property long long normalizedCurrentValue;
@property long long normalizedMaxValue;
@property NSInteger operationType;
@property NSInteger units;

- (void)_updateStatisticsFromSnapshots;
- (BOOL)canPause;
- (double)changeRate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)currentValue;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)estimatedTimeRemaining;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (long long)maxValue;
- (long long)normalizedCurrentValue;
- (long long)normalizedMaxValue;
- (NSInteger)operationType;
- (void)resetSnapshots;
- (void)setCanPause:(BOOL)arg1;
- (void)setChangeRate:(double)arg1;
- (void)setCurrentValue:(long long)arg1;
- (void)setEstimatedTimeRemaining:(double)arg1;
- (void)setMaxValue:(long long)arg1;
- (void)setNormalizedCurrentValue:(long long)arg1;
- (void)setNormalizedMaxValue:(long long)arg1;
- (void)setOperationType:(NSInteger)arg1;
- (void)setUnits:(NSInteger)arg1;
- (void)snapshot;
- (NSInteger)units;

@end