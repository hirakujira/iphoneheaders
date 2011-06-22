/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet, RunLoopContinuation, NSString;

@interface MLPurchasedContentFolder : NSObject {
@private
	NSMutableSet* _purchasedContentXMLFilesLoaded;
	NSMutableDictionary* _purchasedContentInfo;
	NSString* _basePath;
	id _delegate;
	RunLoopContinuation* _loadPurchasesContinuation;
	double _lastPurchaseNotificationTime;
}
@property(readonly, assign, nonatomic) NSString* basePath;
+(void)_createParentFolderIfNecessary:(id)necessary;
+(void)setShouldImportPurchasesSynchronously:(BOOL)importPurchasesSynchronously;
-(id)_storePurchasesInfoFilePath;
-(id)_mobileDBTrackInfoPath;
-(void)_loadSavedPurchaseDB;
-(void)_savePurchaseDBInfo;
-(void)_removeXMLFilenameFromPurchasedConent:(id)purchasedConent;
-(id)purchasedContentXMLFilenames;
-(BOOL)_updatePurchasedContentInfoWithXMLFilename:(id)xmlfilename itemInserted:(BOOL*)inserted;
-(id)initWithBasePath:(id)basePath delegate:(id)delegate;
-(void)clearWeakReference:(id)reference;
-(void)dealloc;
-(unsigned)countOfPurchasedContent;
-(BOOL)_reloadPurchasedContentData;
-(BOOL)_continueUpdatingPurchasedContent:(id)content;
-(void)_finishUpdatingPurchasedContent:(id)content;
-(BOOL)reloadPurchasedContentData;
-(id)mobileArtworkDBPath;
-(void)removeReferencesToAssetFilename:(id)assetFilename;
@end
