/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

@interface PFSharingRemakerOptions : NSObject <NSCopying> {
    NSString * _customAccessibilityLabel;
    NSURL * _outputDirectoryURL;
    BOOL  _shouldConvertToSRGB;
    BOOL  _shouldStripAllMetadata;
    BOOL  _shouldStripLocation;
}

@property (nonatomic, copy) NSString *customAccessibilityLabel;
@property (nonatomic, copy) NSURL *outputDirectoryURL;
@property (nonatomic) BOOL shouldConvertToSRGB;
@property (nonatomic) BOOL shouldStripAllMetadata;
@property (nonatomic) BOOL shouldStripLocation;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customAccessibilityLabel;
- (id)outputDirectoryURL;
- (void)setCustomAccessibilityLabel:(id)arg1;
- (void)setOutputDirectoryURL:(id)arg1;
- (void)setShouldConvertToSRGB:(BOOL)arg1;
- (void)setShouldStripAllMetadata:(BOOL)arg1;
- (void)setShouldStripLocation:(BOOL)arg1;
- (BOOL)shouldConvertToSRGB;
- (BOOL)shouldStripAllMetadata;
- (BOOL)shouldStripLocation;

@end
