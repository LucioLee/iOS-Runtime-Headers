/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class SSRequest;

@interface ISStoreServicesRequestOperation : ISOperation  {
    SSRequest *_request;
}

@property(readonly) SSRequest * request;


- (void)cancel;
- (void)dealloc;
- (id)request;
- (void)run;
- (id)initWithRequest:(id)arg1;

@end