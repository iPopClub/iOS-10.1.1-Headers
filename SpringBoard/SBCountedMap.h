//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSMutableDictionary;

@interface SBCountedMap : NSObject
{
    NSCountedSet *_countedKeys;
    NSMutableDictionary *_map;
}

- (void).cxx_destruct;
- (void)checkinValues:(id)arg1;
- (void)checkinValue:(id)arg1;
- (id)checkoutValueForKey:(id)arg1 creationBlock:(CDUnknownBlockType)arg2;
- (id)init;

@end

