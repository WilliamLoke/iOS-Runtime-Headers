/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class PLCloudSharedAlbum, PLComposeRecipientViewController;

@interface PLAddSubscribersViewController : UIViewController <PLComposeRecipientViewControllerDelegate, UIAlertViewDelegate> {
    PLComposeRecipientViewController *_composeRecipientController;
    PLCloudSharedAlbum *_album;
}

@property(readonly) PLCloudSharedAlbum * album;


- (void)dealloc;
- (void)_dismiss;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)viewDidLoad;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)didReceiveMemoryWarning;
- (id)album;
- (BOOL)_validateRecipientsToAdd:(id)arg1;
- (void)_saveAndDismiss;
- (void)_addButtonHandler;
- (void)_cancelButtonHandler;
- (id)backingNavigationControllerForComposeRecipientViewController:(id)arg1;
- (id)initWithSharedStream:(id)arg1;

@end