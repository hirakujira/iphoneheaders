/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "PhotoLibrary-Structs.h"
#import <MusicLibrary/MLPhoto.h>


@interface MLPhoto (PhotosAdditions)
+(CGImageRef)createAndSaveIconForWallpaperImage:(id)wallpaperImage;
+(CGImageRef)createUnrotatedImageWithSize:(CGSize)size originalImage:(CGImageRef)image imageOrientation:(int)orientation;
-(id)thumbnailImage;
-(CGImageRef)createThumbnailCGImageRef;
-(CGImageRef)createFullScreenCGImageRef:(int*)ref properties:(const CFDictionaryRef*)properties;
-(CGImageRef)createFullSizeCGImageRefForImagePickerClient:(int*)imagePickerClient;
-(CGImageRef)createFullSizeCGImageRef:(int*)ref;
-(CGImageRef)createLowResolutionFullScreenCGImageRef;
-(BOOL)hasFullSizeImage;
-(CFDataRef)createEmailImageDataWithLargeImage:(id)largeImage imageToAnimate:(CGImageRef*)animate scaledImage:(CGImageRef*)image maximumSize:(CGSize)size;
-(void)copyToPasteboard;
@end

@interface MLPhoto (VideoAdditions)
-(id)previewFrameImageFromDatabase;
@end

@interface MLPhoto (thumbmails)
-(void)saveBakedVideoThumbnail;
// inherited: -(void)decorateThumbnail:(id)thumbnail inContext:(CGContextRef)context;
@end
