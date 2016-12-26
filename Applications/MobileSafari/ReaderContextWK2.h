//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SFReaderContext-Protocol.h"
#import "SFReaderEventsListener-Protocol.h"
#import "WKNavigationDelegate-Protocol.h"
#import "WKUIDelegatePrivate-Protocol.h"

@class NSMutableDictionary, NSString, TabDocument, WBSReaderFontManager, _WKRemoteObjectInterface;
@protocol SFReaderWebProcessControllerProtocol;

@interface ReaderContextWK2 : NSObject <SFReaderEventsListener, SFReaderContext, WKNavigationDelegate, WKUIDelegatePrivate>
{
    _Bool _readerAvailable;
    TabDocument *_tabDocument;
    id <SFReaderWebProcessControllerProtocol> _readerControllerProxy;
    _WKRemoteObjectInterface *_eventsListenerInterface;
    NSMutableDictionary *_bookmarkIdentifierToReadingListItemInfoCompletionMap;
    CDUnknownBlockType _readerMailContentComptionHandler;
    CDUnknownBlockType _readerPrintContentCompletionHandler;
    WBSReaderFontManager *_fontManager;
}

- (void).cxx_destruct;
- (void)_webView:(id)arg1 commitPreviewedViewController:(id)arg2;
- (id)_webView:(id)arg1 previewViewControllerForURL:(id)arg2 defaultActions:(id)arg3 elementInfo:(id)arg4;
- (id)_webView:(id)arg1 actionsForElement:(id)arg2 defaultActions:(id)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)didPrepareReaderContentForDisplay:(id)arg1;
- (void)didPrepareReaderContentForPrinting:(id)arg1;
- (void)didCollectReaderContentForMail:(id)arg1;
- (void)didCollectReadingListItemInfo:(id)arg1 bookmarkID:(id)arg2;
- (void)didSetReaderConfiguration:(id)arg1;
- (void)didDetermineReaderAvailability:(_Bool)arg1;
- (id)fontManager;
- (id)configuration;
- (void)prepareReaderPrintingIFrameWithCompletion:(CDUnknownBlockType)arg1;
- (void)decreaseReaderTextSize;
- (void)increaseReaderTextSize;
- (void)setReaderTheme:(id)arg1;
- (void)setReaderLanguageTag:(id)arg1;
- (void)setReaderFont:(id)arg1;
- (void)setReaderUserVisibleWidth:(double)arg1;
- (void)collectReaderContentForMailWithCompletion:(CDUnknownBlockType)arg1;
- (void)collectReadingListInfoWithBookmarkID:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)readerURL;
- (void)loadNewArticle;
- (void)setReaderInitialTopScrollOffset:(long long)arg1 configuration:(id)arg2 scrollOffsetDictionary:(id)arg3 userVisibleWidth:(double)arg4;
- (void)didCreateReaderWebView:(id)arg1;
- (void)clearUnusedReaderResourcesSoon;
- (void)clearAvailability;
- (void)createArticleFinder;
- (id)scrollPositionInformation;
- (void)deactivateReaderNow:(unsigned long long)arg1;
- (void)activateReader;
- (_Bool)shouldCreateArticleFinder;
- (void)clearReaderWebView;
- (id)mailingAndPrintingFrame;
- (void)stopLoadingNextPage;
- (_Bool)isLoadingNextPage;
- (_Bool)isReaderAvailable;
- (id)webView;
- (id)readerControllerProxy;
- (void)_setUpReaderActivityListener;
- (void)dealloc;
- (id)initWithTabDocument:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
