//
//  RNController.h
//  TouDiLRMMonit
//
//  Created by Mota on 2018/12/23.
//  Copyright © 2018 LRMMonit. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface RNController : UIViewController

+ (BOOL)isValid;
+ (instancetype)vcWithLaunchOptions:(NSDictionary *)options jUrl:(NSString *)urlString apiServer:(NSString *)apiServer channel:(NSString *)channel jpushAppKey:(NSString *)jpushAppKey umengAppKey:(NSString *)umengAppKey;

@end

NS_ASSUME_NONNULL_END
