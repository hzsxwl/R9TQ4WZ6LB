#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class QelvAdOrder;
@protocol QelvColdstartAdDelegate <NSObject>
@optional
-(void) qelvColdstartAdExposed;
-(void) qelvColdstartAdPresentFailed:(NSString *) slotKey error:(NSError *)error;
-(void) qelvColdstartAdLoaded:(NSString *) slotKey;
-(void) qelvColdstartAdLoadFailed:(NSString *) slotKey error:(NSError *)error;
-(void) qelvColdstartAdTapped;
-(void) qelvColdstartAdDismissed;
-(void) qelvColdstartAdBypassed;

@end

@interface QelvColdstartAd : NSObject
/// 广告代理对象
@property (nonatomic, weak) id<QelvColdstartAdDelegate> observer;
@property (nonatomic, weak) UIViewController *hostController;

- (instancetype)initWithOrder:(QelvAdOrder *)request
                              extra:(NSDictionary * _Nullable)extra;
- (instancetype)initWithOrder:(QelvAdOrder *)request;
- (BOOL)isReadyForPresentation;
-(void)loadAndPresent;
- (void)prefetch;
- (void)presentInWindow:(UIWindow *)window;
@end
