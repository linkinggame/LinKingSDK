//
//  Desirousmeter.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/16.
//  Copyright © 2020 . All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface Desirousmeter : UIViewController
@property (nonatomic, copy) void(^deviceOrientationHander)(UIDeviceOrientation orientation);
@property (nonatomic, assign) BOOL isFullScreen;
- (void)setAlterWidth:(CGFloat)width;
- (void)setAlterHeight:(CGFloat)height;
- (void)setAlterContentView:(UIView *)contentView;
- (void)Turgidfluent;
- (NSError *)Carvingwince:(NSString *)msg code:(int)code;
- (void)showMaskView;
- (void)hiddenMaskView;
@end

NS_ASSUME_NONNULL_END
