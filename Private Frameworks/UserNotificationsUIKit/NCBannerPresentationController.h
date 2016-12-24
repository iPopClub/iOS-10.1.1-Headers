/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 10:30:11 PM Eastern Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UIKit/UIPresentationController.h>

@protocol UIViewControllerTransitionCoordinator;
@class NSArray;

@interface NCBannerPresentationController : UIPresentationController {

	id<UIViewControllerTransitionCoordinator> _activeTransitionCoordinator;
	BOOL _wantsContainerHeight;
	NSArray* _additionalBackgroundViews;

}

@property (nonatomic,retain) NSArray * additionalBackgroundViews;              //@synthesize additionalBackgroundViews=_additionalBackgroundViews - In the implementation block
@property (assign,nonatomic) BOOL wantsContainerHeight;                        //@synthesize wantsContainerHeight=_wantsContainerHeight - In the implementation block
+(CGRect)useableContainerViewFrameInContainerViewWithBounds:(CGRect)arg1 ;
-(CGRect)frameOfPresentedViewInContainerView;
-(BOOL)shouldRemovePresentersView;
-(BOOL)_shouldDisableInteractionDuringTransitions;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)presentationTransitionWillBegin;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(CGRect)frameOfDismissedViewInContainerView;
-(CGRect)_presentedFrameForViewController:(id)arg1 inPresentationFrame:(CGRect)arg2 ;
-(CGRect)_frameForViewController:(id)arg1 beyondEdge:(unsigned long long)arg2 ;
-(void)setAdditionalBackgroundViews:(NSArray *)arg1 ;
-(void)setWantsContainerHeight:(BOOL)arg1 ;
-(NSArray *)additionalBackgroundViews;
-(BOOL)wantsContainerHeight;
@end
