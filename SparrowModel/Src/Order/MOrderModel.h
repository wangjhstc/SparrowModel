//
//  MOrderModel.h
//  SparrowModel
//
//  Created by microsparrow on 16/9/29.
//  Copyright © 2016年 microsparrow. All rights reserved.
//

#import <Foundation/Foundation.h>

@class MCommodity;

@interface MOrderModel : NSObject

/*! 订单号 */
@property   (nonatomic,copy)    NSString                    *ordernumber;
/*! 订单商品 */
@property   (nonatomic,strong)  NSArray<MCommodity *>       *commoditys;
/*! 优惠金额 */
@property   (nonatomic,assign)  NSInteger                   couponPrice;
/*! 需支付金额 */
@property   (nonatomic,assign)  NSInteger                   price;
/*! 总共金额 （couponPrice + price）*/
@property   (nonatomic,assign)  NSInteger                   amount;

@end
