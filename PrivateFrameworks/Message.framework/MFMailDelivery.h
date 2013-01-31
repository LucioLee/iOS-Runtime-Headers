/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class Message, PlainTextDocument, MailAccount, NSDictionary, MutableMessageHeaders, DeliveryAccount, NSString, NSArray;

@interface MFMailDelivery : NSObject  {
    id _delegate;
    Message *_message;
    MailAccount *_archiveAccount;
    DeliveryAccount *_account;
    MutableMessageHeaders *_headers;
    NSDictionary *_compositionSpecification;
    NSArray *_mixedContent;
    BOOL _textPartsAreHTML;
    NSString *_htmlString;
    PlainTextDocument *_plainTextAlternative;
    NSArray *_otherStringsAndAttachments;
    NSArray *_charsets;
    unsigned int _threaded : 1;
    unsigned int _status : 4;
    unsigned int _useCellDataOnly : 1;
    unsigned int __UNUSED__ : 24;
}

@property(retain) NSDictionary * compositionSpecification;

+ (BOOL)deliverMessage:(id)arg1;
+ (id)newWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4 charsets:(id)arg5;
+ (id)newWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(BOOL)arg3;
+ (id)newWithMessage:(id)arg1;

- (void)archive;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)initWithMessage:(id)arg1;
- (void)setCompositionSpecification:(id)arg1;
- (void)setCellDataOnly:(BOOL)arg1;
- (void)deliverAsynchronously;
- (BOOL)shouldEncryptMessage;
- (BOOL)shouldSignMessage;
- (int)deliveryStatus;
- (void)setAccount:(id)arg1;
- (void)setArchiveAccount:(id)arg1;
- (id)archiveAccount;
- (id)initWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4 charsets:(id)arg5;
- (id)initWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(BOOL)arg3;
- (int)deliverMessageData:(id)arg1 toRecipients:(id)arg2;
- (id)headersForDelivery;
- (id)originalHeaders;
- (id)newMessageWriter;
- (int)deliverSynchronously;
- (id)compositionSpecification;
- (id)account;
- (id)message;

@end