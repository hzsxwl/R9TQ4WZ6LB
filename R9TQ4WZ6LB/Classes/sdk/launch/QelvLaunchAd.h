#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class QelvAdOrder;
@protocol QelvLaunchAdDelegate <NSObject>
@optional
-(void) qelvLaunchAdExposed;
-(void) qelvLaunchAdPresentFailed:(NSString *) slotKey error:(NSError *)error;
-(void) qelvLaunchAdLoaded:(NSString *) slotKey;
-(void) qelvLaunchAdLoadFailed:(NSString *) slotKey error:(NSError *)error;
-(void) qelvLaunchAdTapped;
-(void) qelvLaunchAdDismissed;
-(void) qelvLaunchAdBypassed;

@end

@interface QelvLaunchAd : NSObject
/// 广告代理对象
@property (nonatomic, weak) id<QelvLaunchAdDelegate> observer;
@property (nonatomic, weak) UIViewController *hostController;

- (instancetype)initWithOrder:(QelvAdOrder *)request
                              extra:(NSDictionary * _Nullable)extra;
- (instancetype)initWithOrder:(QelvAdOrder *)request;
- (BOOL)isReadyForPresentation;
-(void)loadAndPresent;
- (void)prefetch;
- (void)presentInWindow:(UIWindow *)window;
@end
