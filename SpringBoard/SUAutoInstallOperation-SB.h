//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SoftwareUpdateServices/SUAutoInstallOperation.h>

@interface SUAutoInstallOperation (SB)
- (id)_getForecastDateCache;
- (_Bool)_sb_isValidTillDate:(id)arg1;
- (_Bool)_sb_isDateExpired:(id)arg1;
- (id)description;
- (id)sb_formatCardinalityForEndTime;
- (id)sb_formatCardinalityForStartTime;
- (id)sb_roundedEndTimeString;
- (id)sb_roundedStartTimeString;
- (unsigned long long)sb_scheduleType;
- (_Bool)sb_isValidForScheduling;
- (_Bool)sb_isScheduled;
- (_Bool)sb_isForecastLogicallyExpired;
@end

