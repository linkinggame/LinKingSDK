

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CNBbmifHkpxa_GView : UIView
+ (instancetype)instancePayTypeView;
@property (weak, nonatomic) IBOutlet UILabel *label_game_orderNum;
@property (weak, nonatomic) IBOutlet UILabel *label_price;
@property (weak, nonatomic) IBOutlet UILabel *label_name;
@property (nonatomic,copy) void(^closeAlterViewCallBack)(void);
@property (nonatomic,copy) void(^selectPayTypeCallBack)(UIButton *sender);

@property (weak, nonatomic) IBOutlet UIView *view_left;

@property (weak, nonatomic) IBOutlet UIView *view_right;

@end

NS_ASSUME_NONNULL_END
