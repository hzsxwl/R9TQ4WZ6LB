//
//  QelvReserveQueue.h
//  R9TQ4WZ6LB-iOS
//
//

#import <Foundation/Foundation.h>
#import <WindMillSDK/WindMillSDK.h>

@interface QelvReserveQueue : NSObject
+(instancetype) obtainInstance;
-(void) reserveSlots:(NSString *)gratifySlot midwaySlot:(NSString *)midwaySlot fullscreenSlot:(NSString *)fullscreenSlot memberTag:(NSString *)memberTag;
-(WindMillRewardVideoAd *) parkedGratifyAd;
-(WindMillIntersititialAd *) parkedMidwayAd;
-(WindMillIntersititialAd *) parkedFullscreenAd;
-(NSString *) currentMidwaySlot;
-(NSString *) currentFullscreenSlot;
@end

