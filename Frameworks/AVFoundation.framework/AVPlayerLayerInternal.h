/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVPlayer, AVPlayerItem, CALayer, FigSubtitleCALayer, NSDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface AVPlayerLayerInternal : NSObject {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    AVPlayer *_player;
    CALayer *closedCaptionLayer;
    BOOL hasPlayerToObserve;
    BOOL isInPIPMode;
    BOOL isObservingPlayer;
    BOOL isPresentationLayer;
    BOOL isReadyForDisplay;
    struct OpaqueFigSimpleMutex { } *isReadyForDisplayMutex;
    AVPlayerItem *itemMarkedReadyForDisplay;
    } latestPlayerLayerBoundsAtRendering;
    } latestPresentationSizeAtRendering;
    } latestSubtitleLayoutAtRendering;
    CALayer *maskLayer;
    NSDictionary *pixelBufferAttributes;
    } presentationSize;
    NSObject<OS_dispatch_queue> *serialQueue;
    BOOL shouldObservePlayer;
    NSString *subtitleGravity;
    FigSubtitleCALayer *subtitleLayer;
    NSString *videoGravity;
    CALayer *videoLayer;
}

@end
