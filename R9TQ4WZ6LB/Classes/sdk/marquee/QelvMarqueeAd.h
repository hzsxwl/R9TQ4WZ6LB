//
//  QelvMarqueeAd.h
//  R9TQ4WZ6LB-iOS
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@class QelvAdOrder;
@class QelvMarqueeAd;

NS_ASSUME_NONNULL_BEGIN

@protocol QelvMarqueeAdDelegate <NSObject>

@optional

- (void)qelvMarqueeRefreshed:(QelvMarqueeAd *)bannerAdView;

- (void)qelvMarqueeRefreshFailed:(NSError *)error;

- (void)qelvMarqueeLoaded:(QelvMarqueeAd *)bannerAdView;

- (void)qelvMarqueeLoadFailed:(NSError *)error;

- (void)qelvMarqueeExposed;

- (void)qelvMarqueeTapped;

- (void)qelvMarqueeLeftHostApp;

- (void)qelvMarqueeWillCoverScreen;
- (void)qelvMarqueeCoverClosed;
- (void)qelvMarqueeRemoved;
@end

@interface QelvMarqueeAd : NSObject

@property (nonatomic, weak) id<QelvMarqueeAdDelegate> observer;

@property (nonatomic, weak) UIViewController *hostController;

@property (nonatomic) BOOL animatesOnTransition;

@property (nonatomic, assign) CGSize creativeBounds;
@property(nullable, nonatomic,copy) UIColor *canvasTint;

- (instancetype)initWithOrder:(QelvAdOrder *)request;

- (instancetype)initWithOrder:(QelvAdOrder *)request
                     desiredSize:(CGSize)desiredSize;

- (void)prefetchRibbon;
- (BOOL)isReadyForPresentation;
- (UIView *)surfaceView;
@end
NS_ASSUME_NONNULL_END

