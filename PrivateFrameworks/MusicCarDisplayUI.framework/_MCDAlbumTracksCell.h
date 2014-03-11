/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@class NSString, UILabel;

@interface _MCDAlbumTracksCell : UITableViewCell {
    UILabel *_durationLabel;
    float _maximumDurationWidth;
    UILabel *_titleLabel;
    UILabel *_trackNumberLabel;
}

@property(copy) NSString * durationText;
@property float maximumDurationWidth;
@property(copy) NSString * title;
@property(copy) NSString * trackNumberText;

- (void).cxx_destruct;
- (id)durationText;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (float)maximumDurationWidth;
- (void)setDurationText:(id)arg1;
- (void)setMaximumDurationWidth:(float)arg1;
- (void)setTitle:(id)arg1;
- (void)setTrackNumberText:(id)arg1;
- (id)title;
- (id)trackNumberText;

@end