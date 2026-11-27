//
//  QelvTileCanvas.h
//  R9TQ4WZ6LB-iOS
//
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class QelvTileCanvas;
@class QelvTileAd;
@protocol QelvTileCanvasDelegate <NSObject>
@optional
- (void)qelvTileCanvasDrawn:(QelvTileCanvas *)nativeAdView;
- (void)qelvTileCanvasDrawFailed:(NSError *)error;
- (void)qelvTileCanvasWillAppear;
- (void)qelvTileCanvasTapped;
- (void)qelvTileCanvasRejected:(NSString *) reason;

@end
@interface QelvTileCanvas : NSObject
+ (instancetype)makeCanvas;

@property(nonatomic) CGRect frame;
@property (nonatomic, weak) id<QelvTileCanvasDelegate> observer;
@property (nonatomic, weak) UIViewController *hostController;
- (void)bindTile:(QelvTileAd *)upstreamCreative;
- (UIView *)surfaceView;
@end
