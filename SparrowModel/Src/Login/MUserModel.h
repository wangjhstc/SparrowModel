//
//  MUserModel.h
//  SparrowModel
//
//  Created by microsparrow on 16/9/29.
//  Copyright © 2016年 microsparrow. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MUserModel : NSObject

/*! 登录名 */
@property   (nonatomic,copy)    NSString    *name;
/*! 登录密码 */
@property   (nonatomic,copy)    NSString    *password;

@end
