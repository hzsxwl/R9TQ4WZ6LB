#import <Foundation/Foundation.h>

@interface QelvSlotRecord : NSObject
  
@property (nonatomic, copy) NSString *slotKey;
@property (nonatomic, copy) NSString *creativeId;
@property (nonatomic, copy) NSString *creativeKind;
@property (nonatomic) int pointWeight;
@property (nonatomic) int transferRate;
@property (nonatomic, copy) NSString *originClientTag;
@property (nonatomic, copy) NSString *hostClientTag;
@property (nonatomic, copy) NSString *creativeMark;

@end
