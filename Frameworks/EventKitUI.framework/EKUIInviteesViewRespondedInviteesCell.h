/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSArray, NSLayoutConstraint, UIImageView, UILabel;

@interface EKUIInviteesViewRespondedInviteesCell : UITableViewCell {
    UILabel *_commentLabel;
    NSLayoutConstraint *_minimumHeightConstraint;
    NSLayoutConstraint *_nameBaselineToTopConstraint;
    UILabel *_nameLabel;
    UIImageView *_participationStatusImageView;
    NSArray *_persistentConstraints;
    NSArray *_removableConstraints;
}

@property(retain) UILabel * commentLabel;
@property(retain) NSLayoutConstraint * minimumHeightConstraint;
@property(retain) NSLayoutConstraint * nameBaselineToTopConstraint;
@property(retain) UILabel * nameLabel;
@property(retain) UIImageView * participationStatusImageView;
@property(retain) NSArray * persistentConstraints;
@property(retain) NSArray * removableConstraints;

+ (id)_commentLabelFont;
+ (float)_leftTextInset;
+ (id)_nameLabelFont;

- (void).cxx_destruct;
- (id)commentLabel;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (id)minimumHeightConstraint;
- (id)nameBaselineToTopConstraint;
- (id)nameLabel;
- (id)participationStatusImageView;
- (id)persistentConstraints;
- (id)removableConstraints;
- (void)setCommentLabel:(id)arg1;
- (void)setMinimumHeightConstraint:(id)arg1;
- (void)setNameBaselineToTopConstraint:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setParticipationStatusImageView:(id)arg1;
- (void)setPersistentConstraints:(id)arg1;
- (void)setRemovableConstraints:(id)arg1;
- (void)updateConstraints;
- (void)updateWithParticipantForSorting:(id)arg1;

@end