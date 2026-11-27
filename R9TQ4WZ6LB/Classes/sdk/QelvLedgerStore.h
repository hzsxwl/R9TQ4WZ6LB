//
//  QelvLedgerStore.h
//  R9TQ4WZ6LB-iOS
//
//
#import "QelvSlotRecord.h"
#import <Foundation/Foundation.h>

@interface QelvLedgerStore : NSObject
@property (nonatomic) int slotWeight;
+(instancetype) obtainInstance;
-(void) storeRecord:(NSString *)slotKey record:(QelvSlotRecord *) record;
-(QelvSlotRecord *) recordForSlot: (NSString *)slotKey;
@end

