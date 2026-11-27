//
//  QelvAdOrder.h
//  R9TQ4WZ6LB-iOS
//
//

#import <Foundation/Foundation.h>
@interface QelvAdOrder : NSObject

// 【可选】，媒体用户ID。
@property (nonatomic,copy) NSString *memberTag;

// 【比传】，广告位ID。
@property (nonatomic,copy) NSString *slotKey;

// 【可选】，服务端激励回传时，透传参数。
@property (nonatomic,strong) NSDictionary<NSString *, NSString *> *passThrough;

+ (instancetype)makeOrder;



@end
