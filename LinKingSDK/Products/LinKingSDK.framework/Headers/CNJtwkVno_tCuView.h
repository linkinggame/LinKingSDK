

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CNJtwkVno_tCuView : UICollectionView
- (instancetype)initWithFrame:(CGRect)frame;
- (void)reloadDatas:(NSArray *)datas;
@property (nonatomic,copy)void(^selectItemCallBack)(NSInteger index);

@end

NS_ASSUME_NONNULL_END
