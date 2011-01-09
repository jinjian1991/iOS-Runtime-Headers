/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class CalDAVOperationQueue, NSError;



@interface CalDAVQueueableOperation : NSObject 
{
    CalDAVOperationQueue *_queue;
    NSError *_error;
    BOOL _running;
    NSInteger _retryCounter;
    BOOL _pendingRetry;
    BOOL _finished;
}


- (id)initWithQueue:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)beginQueueableOperation;
- (void)performOperation;
- (id)queue;
- (id)error;
- (void)logError:(id)arg1;
- (id)rebuildError:(id)arg1;
- (BOOL)isTransientError:(id)arg1;
- (void)retryTimerFired:(id)arg1;
- (BOOL)scheduleRetry:(NSInteger)arg1;
- (void)scheduleRetryMainThread:(id)arg1;
- (void)setError:(id)arg1;
- (void)enqueue;
- (void)cancel;
- (void)finishOperation;
- (BOOL)isRunning;
- (id)readableDescription;
- (BOOL)isPendingRetry;
- (NSInteger)retryCounter;
- (NSInteger)maxRetries;

@end