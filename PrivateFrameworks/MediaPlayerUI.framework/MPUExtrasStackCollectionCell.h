/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@class MPUExtrasGridElementViewController, MPUExtrasGridSectionHeaderStyle, MPUExtrasStackTemplateViewController, NSArray;

@interface MPUExtrasStackCollectionCell : UICollectionViewCell {
    NSArray *_fitConstraints;
    BOOL _needsViewWillAppear;
    MPUExtrasStackTemplateViewController *_parentViewController;
    MPUExtrasGridSectionHeaderStyle *_sectionStyle;
    MPUExtrasGridElementViewController *_viewController;
}

@property(retain) MPUExtrasStackTemplateViewController * parentViewController;
@property(readonly) MPUExtrasGridSectionHeaderStyle * sectionStyle;
@property(retain) MPUExtrasGridElementViewController * viewController;

- (void).cxx_destruct;
- (id)parentViewController;
- (id)sectionStyle;
- (void)setParentViewController:(id)arg1;
- (void)setViewController:(id)arg1;
- (id)viewController;
- (void)willMoveToSuperview:(id)arg1;

@end
