/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@class MusicPlaylistActionsView, NSOperationQueue, UIActionSheet;

@interface MusicPlaylistSongsViewController : MusicSongsViewController <MusicPickerOverlayDelegate, UIActionSheetDelegate> {
    MusicPlaylistActionsView *_actionsView;
    UIActionSheet *_clearActionSheet;
    UIActionSheet *_deleteActionSheet;
    NSOperationQueue *_downloadabilityOperationQueue;
    int _downloadableSongCount;
    BOOL _isDownloading;
    BOOL _isTransitioning;
}

@property(readonly) int downloadableSongCount;
@property(readonly) BOOL isDownloading;

+ (BOOL)_shouldDisplayActions;
+ (BOOL)_shouldPopWhenEmpty;
+ (BOOL)_supportsSearch;
+ (id)actionCellConfigurationClasses;

- (void).cxx_destruct;
- (void)_addItemsAction:(id)arg1;
- (BOOL)_allowsAddingSongs;
- (BOOL)_allowsEditing;
- (BOOL)_allowsIndividualTrackDeletion;
- (void)_clearAction:(id)arg1;
- (void)_deleteAction:(id)arg1;
- (void)_doneEditingAction:(id)arg1;
- (void)_downloadAllButtonAction:(id)arg1;
- (void)_editAction:(id)arg1;
- (void)_geniusNewAction:(id)arg1;
- (void)_geniusRefreshAction:(id)arg1;
- (void)_geniusSaveAction:(id)arg1;
- (id)_playlist;
- (id)_playlistTitle;
- (id)_seedItem;
- (void)_updateActionsView;
- (void)_updateCloudPlaylist;
- (void)_updateDownloadabilityStateWithCanReloadActionRows:(BOOL)arg1 animated:(BOOL)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)dealloc;
- (void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3;
- (int)downloadableSongCount;
- (BOOL)isDownloading;
- (void)pickerOverlayDidFinish:(id)arg1;
- (void)pickerOverlayRequestsFinish:(id)arg1;
- (void)reloadData;
- (BOOL)shouldShowActionCellConfiguration:(Class)arg1;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end