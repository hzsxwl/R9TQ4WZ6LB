//
//  QelvMidwayAd.h
//  R9TQ4WZ6LB-iOS
//
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class QelvAdOrder;
@protocol QelvMidwayAdDelegate <NSObject>
@optional
-(void) qelvMidwayAdLoaded:(NSString *) slotKey;
-(void) qelvMidwayAdLoadFailed:(NSString *) slotKey error:(NSError *)error;
-(void) qelvMidwayAdPlayStarted;
-(void) qelvMidwayAdPlayEnded;
-(void) qelvMidwayAdTapped;
-(void) qelvMidwayAdDismissed;
-(void) qelvMidwayAdBypassed;

@end

@interface QelvMidwayAd : NSObject
/// 广告代理对象
@property (nonatomic, weak) id<QelvMidwayAdDelegate> observer;

- (instancetype)initWithOrder:(QelvAdOrder *)request;
- (BOOL)isReadyForPresentation;
- (void)prefetchMidwayAd;
- (void)presentFromController:(UIViewController *)hostController;
@end
