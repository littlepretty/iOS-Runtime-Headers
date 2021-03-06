/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSWPTOCSettings;

@interface TSWPInsertTOCCommand : TSWPTextCommand {
    TSWPTOCSettings *_tocSettings;
}

+ (struct _NSRange { unsigned int x1; unsigned int x2; })insertTOCAttachmentInStorage:(id)arg1 documentRoot:(id)arg2 content:(id)arg3 selection:(id)arg4 tocSettings:(id)arg5 withScope:(int)arg6 undoRedoTransaction:(struct TSWPStorageTransaction { }*)arg7;
+ (struct _NSRange { unsigned int x1; unsigned int x2; })insertTOCAttachmentInStorage:(id)arg1 documentRoot:(id)arg2 tocStorage:(id)arg3 selection:(id)arg4 tocSettings:(id)arg5 withScope:(int)arg6 undoRedoTransaction:(struct TSWPStorageTransaction { }*)arg7;

- (void)doCommit;
- (id)initWithStorage:(id)arg1 selection:(id)arg2 tocSettings:(id)arg3 withScope:(int)arg4;
- (int)persistenceKind;

@end
