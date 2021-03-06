//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PurplePageLoadTestRunner.h"

@class NSMutableArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface ScrollPerfTestRunner : PurplePageLoadTestRunner
{
    NSObject<OS_dispatch_queue> *_eventGeneratorQueue;
    long long _gestureState;
    double _gestureStartTime;
    unsigned int _scrollGestureCount;
    struct CGPoint _scrollOffsetAtGestureStart;
    long long _scrollDirection;
    int _pageIndex;
    double _startLoadTime;
    double _endLoadTime;
    double _startScrollingTime;
    double _endScrollingTime;
    double _lastFramerateTime;
    unsigned int _lastFrameCounter;
    NSMutableArray *_framerateHistory;
    NSMutableDictionary *_outputData;
}

- (void).cxx_destruct;
- (id)outputDataForPage:(id)arg1;
- (id)machineConfigInfo;
- (id)finalStatusForPage:(id)arg1;
- (void)finishedTestPage:(id)arg1;
- (void)finishPage:(id)arg1 stats:(id)arg2 error:(id)arg3;
- (_Bool)startPageAction:(id)arg1;
- (_Bool)isPageTooShortToScroll;
- (void)determineScrollDirection;
- (void)advanceGesture;
- (struct CGPoint)touchPointForMoveIndex:(unsigned long long)arg1;
- (void)appendToFramerateHistory;
- (_Bool)performActionForPage:(id)arg1;
- (void)startingTestPage:(id)arg1;
- (void)finishedTestRunner;
- (void)writeOutputData;
- (id)pageScrollView;
- (id)pageWebView;
- (id)initWithTestName:(id)arg1 browserController:(id)arg2;

@end

