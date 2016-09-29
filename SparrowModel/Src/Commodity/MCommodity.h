//
//  MCommodity.h
//  SparrowModel
//
//  Created by microsparrow on 16/9/29.
//  Copyright © 2016年 microsparrow. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MCommodity : NSObject

/*! 商品名称 */
@property   (nonatomic,copy)    NSString    *name;
/*! 保质期 */
@property   (nonatomic,copy)    NSString    *shelfLife;
/*! 卫生标准号 ex:GB15979 */
@property   (nonatomic,copy)    NSString    *QSCode;
/*! 商品代码 */
@property   (nonatomic,assign)  long        code;

@end
