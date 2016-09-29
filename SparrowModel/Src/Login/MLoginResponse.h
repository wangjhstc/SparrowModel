//
//  MLoginResponse.h
//  SparrowModel
//
//  Created by microsparrow on 16/9/29.
//  Copyright © 2016年 microsparrow. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MLoginResponse : NSObject

@property   (nonatomic,copy)    NSString    *shopName;
/*! 消费模式 */
@property   (nonatomic,assign)  NSInteger   mode;

@end
