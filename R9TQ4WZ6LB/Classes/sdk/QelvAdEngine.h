//
//  QelvAdEngine.h
//  R9TQ4WZ6LB-iOS
//
//

#import <Foundation/Foundation.h>

typedef NS_ENUM (NSInteger, QelvConsentDecision) {
    QelvConsentUnset = 0,
    QelvConsentGiven,
    QelvConsentWithheld,
};

@interface QelvAdEngine : NSObject
+(instancetype) obtainInstance;
-(void)launchWithClientKey:(NSString *)clientKey;
-(void)setDiagnosticsEnabled:(BOOL)enable;
-(void)submitConsentDecision:(QelvConsentDecision)status;
-(void) reserveSlots:(NSString *)gratifySlot midwaySlot:(NSString *)midwaySlot fullscreenSlot:(NSString *)fullscreenSlot memberTag:(NSString *)memberTag;
@end

