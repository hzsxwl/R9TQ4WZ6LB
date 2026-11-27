//
//  QelvTileAd.h
//  R9TQ4WZ6LB-iOS
//
//


#import <Foundation/Foundation.h>
#import <WindMillSDK/WindMillSDK.h>

@interface QelvTileAd : NSObject
- (instancetype)initWithCreative:(WindMillNativeAd *) ad;
- (WindMillNativeAd *)exposeCreative;
@end

