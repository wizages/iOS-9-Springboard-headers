//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBBBSectionInfo.h"

@class NSDate, NSString;

@interface SBChronologicalNotificationsSectionInfo : SBBBSectionInfo
{
    NSString *_title;
}

+ (id)identifierForSectionInfoWithDate:(id)arg1;
+ (id)_identifierForSectionInfoWithRepresentedDate:(id)arg1;
+ (id)_representedDateForDate:(id)arg1;
+ (id)_titleForDate:(id)arg1;
+ (id)infoWithRepresentedObject:(id)arg1;
- (id)description;
- (void)populateReusableView:(id)arg1;
- (id)identifier;
@property(readonly, copy, nonatomic) NSDate *representedDate;
- (void)invalidateTitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)dealloc;

@end

