//
//  QelvNetRelay.h
//  R9TQ4WZ6LB-iOS
//
//
#import <Foundation/Foundation.h>

typedef void(^QelvRelayReplyBlock)(NSData * _Nullable data, NSURLResponse * _Nullable response, NSError * _Nullable error);

@interface QelvNetRelay : NSObject

+ (void)sendPostTo:(NSString *)urlString
                  body:(NSDictionary *)body
                reply:(QelvRelayReplyBlock)reply;

+ (void)syncRemoteConfig:(NSString *) appId;

@end
