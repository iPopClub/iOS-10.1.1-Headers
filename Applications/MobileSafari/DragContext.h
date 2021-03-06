//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BrowserContainerViewController, UIView;
@protocol UICoordinateSpace;

@interface DragContext : NSObject
{
    id <UICoordinateSpace> _referenceSpace;
    UIView *_sourceView;
    double _zPosition;
    BrowserContainerViewController *_browserContainerViewController;
    struct CGPoint _startPoint;
    struct CGPoint _anchorPoint;
}

@property(retain, nonatomic) BrowserContainerViewController *browserContainerViewController; // @synthesize browserContainerViewController=_browserContainerViewController;
@property(readonly, nonatomic) double zPosition; // @synthesize zPosition=_zPosition;
@property(readonly, nonatomic) struct CGPoint anchorPoint; // @synthesize anchorPoint=_anchorPoint;
@property(readonly, nonatomic) struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
@property(readonly, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(readonly, nonatomic) id <UICoordinateSpace> referenceSpace; // @synthesize referenceSpace=_referenceSpace;
- (void).cxx_destruct;
- (id)initWithSourceView:(id)arg1 startPoint:(struct CGPoint)arg2 anchorPoint:(struct CGPoint)arg3 zPosition:(double)arg4;
- (id)init;
- (Class)dragInteractionDriverClass;

@end

