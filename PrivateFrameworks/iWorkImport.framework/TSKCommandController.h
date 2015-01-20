/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSMutableArray, NSMutableIndexSet, TSKAccessController, TSKChangeGroup, TSKCommand, TSKCommandGroup, TSKCommandHistory, TSKCommandSelectionBehavior, TSKCommandSelectionBehaviorHistory, TSKDocumentRoot;

@interface TSKCommandController : NSObject {
    NSMutableArray *_automaticGroupCloseHandlers;
    TSKChangeGroup *_changeGroup;
    NSMutableArray *_commandQueue;
    TSKCommandGroup *_committedLastChanceCommands;
    TSKCommandGroup *_currentGroup;
    unsigned long long _currentGroupOpenCount;
    TSKCommandSelectionBehavior *_currentSelectionBehavior;
    TSKDocumentRoot *_documentRoot;
    unsigned long long _enableUndoRedoCount;
    TSKCommand *_executingCommand;
    TSKCommandHistory *_historyOverride;
    NSMutableArray *_historyOverrides;
    unsigned long long _indexOfGroupThatSetCurrentSelectionBehavior;
    unsigned long long _localEditingCount;
    unsigned long long _localEditingMinUndoCount;
    NSMutableIndexSet *_progressiveEnqueuingEnabledIndexes;
    TSKCommandSelectionBehaviorHistory *_selectionBehaviorHistoryOverride;
    bool_automaticGroupNeedsClose;
    bool_isAutomaticGroupOpen;
    bool_isClosingAutomaticGroup;
    bool_isInLastChanceWrite;
    bool_isRedoing;
    bool_isUndoing;
    bool_localEditingCanRedo;
    bool_processingChanges;
}

@property(readonly) TSKAccessController * accessController;
@property(getter=isAutomaticGroupingEnabled,readonly) bool automaticGroupingEnabled;
@property(readonly) TSKCommandGroup * currentGroup;
@property(readonly) TSKDocumentRoot * documentRoot;
@property(readonly) long long groupingLevel;
@property(readonly) TSKCommandHistory * p_history;
@property(readonly) TSKCommandSelectionBehaviorHistory * p_selectionBehaviorHistory;
@property(getter=isProgressiveEnqueuingInCurrentGroupEnabled,readonly) bool progressiveEnqueuingInCurrentGroupEnabled;

+ (bool)executingInCommandCommitPhase;

- (void)acceptMark;
- (id)accessController;
- (void)beginFieldEditing;
- (void)beginLocalEditing;
- (bool)canCoalesce;
- (bool)canRedo;
- (bool)canUndo;
- (void)closeGroup;
- (void)closeGroupWithSelectionBehavior:(id)arg1;
- (id)currentGroup;
- (void)dealloc;
- (void)disableUndoRedo;
- (id)documentRoot;
- (void)enableAutomaticGroupingUntilNextEventWithCloseHandler:(id)arg1;
- (void)enableProgressiveEnqueuingInCurrentGroup;
- (void)enableUndoRedo;
- (void)endFieldEditing;
- (void)endLocalEditing;
- (void)enqueueCommand:(id)arg1 withSelectionBehavior:(id)arg2;
- (void)enqueueCommand:(id)arg1;
- (id)executingCommand;
- (void)forceCloseAutomaticGroup;
- (long long)groupingLevel;
- (id)initWithDocumentRoot:(id)arg1;
- (bool)isAutomaticGroupingEnabled;
- (bool)isInsideModalEditingSession;
- (bool)isProgressiveEnqueuingInCurrentGroupEnabled;
- (bool)isRedoing;
- (bool)isUndoing;
- (void)mark;
- (void)openGroup;
- (void)openGroupWithSelectionBehavior:(id)arg1;
- (void)p_addSelectionBehavior:(id)arg1;
- (void)p_closeAutomaticGroupIfAppropriate;
- (void)p_commitCommandQueueItem:(id)arg1;
- (void)p_commitRemainingCommandsInGroup:(id)arg1;
- (void)p_completeCommitForCommandQueueItem:(id)arg1 shouldAddToHistory:(id)arg2;
- (void)p_completeCommitForRemainingCommandsInGroup:(id)arg1;
- (void)p_completePostingCollectedChanges;
- (void)p_completeUndoPendingPreflightCommand;
- (void)p_completeUndoRedoForCommandQueueItem:(id)arg1;
- (void)p_enableProgressiveEnqueuingInGroupAtIndex:(unsigned long long)arg1;
- (void)p_enqueueCommand:(id)arg1 phase:(int)arg2 withSelectionBehavior:(id)arg3;
- (id)p_history;
- (void)p_openGroupAtIndex:(unsigned long long)arg1;
- (void)p_performCommitForCommandQueueItem:(id)arg1;
- (void)p_performCommitForRemainingCommandsInCurrentGroup;
- (void)p_performRedoForCommandQueueItem:(id)arg1;
- (void)p_performUndoForCommandQueueItem:(id)arg1;
- (void)p_postAsyncPhaseChanges:(id)arg1;
- (void)p_postChanges:(id)arg1 forSyncPhase:(bool)arg2;
- (void)p_postHistoryChangedNotificationDueToFieldEditing:(bool)arg1;
- (void)p_postSyncPhaseChanges:(id)arg1;
- (bool)p_processCommandQueueItem:(id)arg1;
- (void)p_redoCommandQueueItem:(id)arg1;
- (unsigned long long)p_redoCount;
- (void)p_restoreUndoRedoState:(id)arg1;
- (id)p_selectionBehaviorHistory;
- (void)p_serviceCommandQueue;
- (void)p_undoCommandQueueItem:(id)arg1;
- (unsigned long long)p_undoCount;
- (void)p_undoPendingPreflightCommand;
- (bool)p_willCommitRemainingCommandsInGroup:(id)arg1;
- (void)p_writeWhileCollectingChangesForCommandPhase:(int)arg1 usingBlock:(id)arg2;
- (bool)processingChanges;
- (void)protected_commitLastChanceCommand:(id)arg1;
- (void)protected_lastChanceWrite;
- (void)protected_performIndirectCommand:(id)arg1 fromCommand:(id)arg2;
- (void)protected_willCommitCommands:(id)arg1;
- (void)redo;
- (id)redoActionString;
- (void)rejectMark;
- (void)rejectPendingPreflightCommand;
- (void)undo;
- (id)undoActionString;
- (void)undoNestedGroup;

@end