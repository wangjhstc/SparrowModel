//
//  MCommodity.h
//  SparrowModel
//
//  Created by microsparrow on 16/9/29.
//  Copyright © 2016年 microsparrow. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum : NSUInteger {
    /*! 普通商品 */
    CommodityTypeOfNormal,
    /*! 套餐商品 */
    CommodityTypeOfCombo,
    /*! 规格商品 */
    CommodityTypeOfSpec,
} CommodityType;

@interface MCommodity : NSObject

/*! 商品编号 */
@property   (nonatomic,copy)    NSString    *ID;
/*! 商品计价类型 */
@property   (nonatomic,copy)    NSString    *type;
/*! 商品名称 */
@property   (nonatomic,copy)    NSString    *name;
/*! 商品单位 */
@property   (nonatomic,copy)    NSString    *unit;
/*! 商品价格 */
@property   (nonatomic,copy)    NSDecimalNumber    *price;
/*! 商品数量 */
@property   (nonatomic,copy)    NSDecimalNumber    *quantity;
/*! 商品唯一标识 */
@property   (nonatomic,copy)    NSString    *identifer;
/*! 是否选中 */
@property   (nonatomic,assign)  BOOL        isSelected;
/*! 是否套餐 */
@property   (nonatomic,assign)  BOOL        isCombo;

@property   (nonatomic,assign)  CommodityType   commodityType;

@end
