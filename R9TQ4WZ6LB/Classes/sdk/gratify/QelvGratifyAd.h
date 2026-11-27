//
//  QelvGratifyAd.h
//  R9TQ4WZ6LB-iOS
//
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class QelvAdOrder;
@protocol QelvGratifyAdDelegate <NSObject>

@required

-(void) qelvGratifyAdRewardGranted:(NSString *_Nonnull) transactionId;

@optional
-(void) qelvGratifyAdLoaded:(NSString *) slotKey;
-(void) qelvGratifyAdLoadFailed:(NSString *) slotKey error:(NSError *)error;
-(void) qelvGratifyAdPlayStarted;
-(void) qelvGratifyAdPlayEnded;
-(void) qelvGratifyAdTapped;
-(void) qelvGratifyAdDismissed;
-(void) qelvGratifyAdBypassed;
-(void) qelvGratifyAdPlayFailed:(NSString *) slotKey error:(NSError *)error;

@end

@interface QelvGratifyAd : NSObject
/// 广告代理对象
@property (nonatomic, weak) id<QelvGratifyAdDelegate> observer;

- (instancetype)initWithOrder:(QelvAdOrder *)request;
- (BOOL)isReadyForPresentation;
- (void)prefetchGratifyAd;
- (void)presentFromController:(UIViewController *)hostController options:(NSDictionary<NSString *, NSString *> * _Nullable)options;
@end

