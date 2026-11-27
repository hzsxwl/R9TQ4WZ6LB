//
//  QelvRibbonAd.h
//  R9TQ4WZ6LB-iOS
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@class QelvAdOrder;
@class QelvRibbonAd;

NS_ASSUME_NONNULL_BEGIN

@protocol QelvRibbonAdDelegate <NSObject>

@optional

- (void)qelvRibbonRefreshed:(QelvRibbonAd *)bannerAdView;

- (void)qelvRibbonRefreshFailed:(NSError *)error;

- (void)qelvRibbonLoaded:(QelvRibbonAd *)bannerAdView;

- (void)qelvRibbonLoadFailed:(NSError *)error;

- (void)qelvRibbonExposed;

- (void)qelvRibbonTapped;

- (void)qelvRibbonLeftHostApp;

- (void)qelvRibbonWillCoverScreen;
- (void)qelvRibbonCoverClosed;
- (void)qelvRibbonRemoved;
@end

@interface QelvRibbonAd : NSObject

@property (nonatomic, weak) id<QelvRibbonAdDelegate> observer;

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

