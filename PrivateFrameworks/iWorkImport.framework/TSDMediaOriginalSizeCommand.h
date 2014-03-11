/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSDMediaInfo;

@interface TSDMediaOriginalSizeCommand : TSKCommand {
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    BOOL mHasOldOriginalSize;
    TSDMediaInfo *mInfo;
    } mNewOriginalSize;
    } mOldOriginalSize;
}

- (id).cxx_construct;
- (void)commit;
- (void)dealloc;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithMediaInfo:(id)arg1 newOriginalSize:(struct CGSize { float x1; float x2; })arg2;
- (void)p_do;
- (BOOL)process;
- (void)redo;
- (void)saveToArchiver:(id)arg1;
- (void)undo;

@end