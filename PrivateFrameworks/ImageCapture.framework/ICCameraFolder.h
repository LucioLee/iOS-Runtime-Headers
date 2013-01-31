/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@class NSArray;

@interface ICCameraFolder : ICCameraItem  {
    void *_folderProperties;
    int _filesLock;
    int _foldersLock;
}

@property(readonly) NSArray * contents;


- (id)valueForUndefinedKey:(id)arg1;
- (id)files;
- (id)description;
- (void)dealloc;
- (BOOL)hasThumbnail;
- (void)requestThumbnail;
- (void)requestMetadata;
- (void)deleteFolder:(id)arg1;
- (void)deleteFile:(id)arg1;
- (void)unlockFolders;
- (void)lockFolders;
- (void)unlockFiles;
- (void)lockFiles;
- (id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3;
- (void)addFolder:(id)arg1;
- (void)deleteItem:(id)arg1;
- (id)folders;
- (struct CGImage { }*)thumbnail;
- (void)finalize;
- (id)contents;
- (void)addFile:(id)arg1;
- (id)metadata;

@end