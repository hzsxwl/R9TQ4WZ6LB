//
//  QelvTileBatch.h
//  R9TQ4WZ6LB-iOS
//
//
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class QelvAdOrder;
@class QelvTileAd;
@class QelvTileBatch;

NS_ASSUME_NONNULL_BEGIN
@protocol QelvTileBatchDelegate <NSObject>

@optional
- (void)qelvTileBatchFetched:(QelvTileBatch *)nativeAdsManager;
- (void)qelvTileBatchFetchFailed:(NSError *)error;

@end


@interface QelvTileBatch : NSObject

@property (nonatomic, weak) id<QelvTileBatchDelegate> observer;

@property (nonatomic, assign, readwrite) CGSize creativeBounds;

- (instancetype)initWithOrder:(QelvAdOrder *)request;

- (void)fetchTilesWithCount:(NSInteger)count;

- (NSArray<QelvTileAd *> * _Nullable)collectAllTiles;

@end

NS_ASSUME_NONNULL_END
