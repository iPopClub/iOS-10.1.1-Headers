//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CatalogViewController, NSString, NSURLRequest, UIViewController;
@protocol CompletionItem;

@protocol CatalogViewControllerDelegate <NSObject>
- (_Bool)catalogViewControllerShouldSuppressPopover:(CatalogViewController *)arg1;
- (double)catalogViewControllerPopoverWidth:(CatalogViewController *)arg1;
- (_Bool)catalogViewControllerShouldRequestSuggestions:(CatalogViewController *)arg1;
- (void)catalogViewController:(CatalogViewController *)arg1 presentViewControllerWithinPopover:(UIViewController *)arg2;
- (struct CGRect)catalogViewControllerPopoverPresentationRect:(CatalogViewController *)arg1;
- (void)catalogViewControllerPopoverWillDismiss:(CatalogViewController *)arg1 dismissalReason:(long long)arg2;
- (void)catalogViewControllerDidSelectFindOnPage:(CatalogViewController *)arg1;
- (void)catalogViewController:(CatalogViewController *)arg1 focusNextKeyView:(_Bool)arg2;
- (void)catalogViewControllerDidEndEditing:(CatalogViewController *)arg1;
- (void)catalogViewControllerDidBeginEditing:(CatalogViewController *)arg1;
- (void)catalogViewController:(CatalogViewController *)arg1 completionItem:(id <CompletionItem>)arg2 wasAcceptedForString:(NSString *)arg3;
- (void)catalogViewController:(CatalogViewController *)arg1 mightSelectCompletionItem:(id <CompletionItem>)arg2 forString:(NSString *)arg3;
- (void)catalogViewController:(CatalogViewController *)arg1 didSelectSearch:(NSString *)arg2;
- (void)catalogViewController:(CatalogViewController *)arg1 loadRequest:(NSURLRequest *)arg2;
- (void)catalogViewController:(CatalogViewController *)arg1 didSelectAddress:(NSString *)arg2;
@end

