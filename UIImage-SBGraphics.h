//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImage.h"

@interface UIImage (SBGraphics)
+ (id)sbg_imageFromContextWithSize:(struct CGSize)arg1 scale:(double)arg2 type:(int)arg3 pool:(id)arg4 drawing:(CDUnknownBlockType)arg5 encapsulation:(CDUnknownBlockType)arg6;
+ (id)sbg_imageFromContextWithSize:(struct CGSize)arg1 scale:(double)arg2 type:(int)arg3 pool:(id)arg4 drawing:(CDUnknownBlockType)arg5;
+ (unsigned long long)sbg_bytesNeededForSize:(struct CGSize)arg1 scale:(double)arg2 withContextType:(int)arg3;
- (struct CGImage *)_newThumbnailWithJPEG:(id)arg1 forMaxPixelDimension:(double)arg2;
- (struct CGImage *)_newThumbnailWithImageSource:(struct CGImageSource *)arg1 forMaxPixelDimension:(double)arg2;
- (id)_thumbnailFitToSize:(struct CGSize)arg1;
- (struct CGImageSource *)_newSource;
- (id)sbg_squareImage;
- (id)sbg_thumbnailFitToSize:(struct CGSize)arg1;
- (_Bool)isAnimated;
@property(readonly, nonatomic) struct CGSize pixelSize;
- (id)sbg_memoryMappedImageWithPool:(id)arg1;
- (_Bool)sbs_hasAlpha;
@end

