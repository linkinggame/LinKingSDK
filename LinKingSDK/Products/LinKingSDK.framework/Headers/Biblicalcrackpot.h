//
//  Biblicalcrackpot.h
//  LinKingSDK
//
//  Created by leoan on 2020/7/20.
//  Copyright © 2020 . All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Biblicalcrackpot : NSObject
+ (void)save:(NSString *)service data:(id)data;
+ (id)load:(NSString *)service;
+ (void)deleteKeyData:(NSString *)service;
@end

NS_ASSUME_NONNULL_END
