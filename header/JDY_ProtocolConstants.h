//
//  ProtocolConstants.h
//  TOPIOSSdk
//
//  Created by fangweng on 12-11-20.
//
//

#import <Foundation/Foundation.h>

@interface JDY_ProtocolConstants : NSObject


//ItemStatus定义
FOUNDATION_EXPORT NSString *const ITEM_STATUS_ON_SALE;//出售中
FOUNDATION_EXPORT NSString *const ITEM_STATUS_IN_STOCK;// 等待上架
FOUNDATION_EXPORT NSString *const ITEM_STATUS_VIOLATION;// 处罚
FOUNDATION_EXPORT NSString *const ITEM_STATUS_HAS_SHOWCASE;//橱窗推荐


//Trade Status
FOUNDATION_EXPORT NSString *const TRADE_NO_CREATE_PAY;
FOUNDATION_EXPORT NSString *const TRADE_WAIT_BUYER_PAY;
FOUNDATION_EXPORT NSString *const TRADE_WAIT_SELLER_SEND_GOODS;
FOUNDATION_EXPORT NSString *const TRADE_BUYER_CONFORM_GOODS;
FOUNDATION_EXPORT NSString *const TRADE_BUYER_SIGNED;
FOUNDATION_EXPORT NSString *const TRADE_FINISHED;
FOUNDATION_EXPORT NSString *const TRADE_CLOSE;
FOUNDATION_EXPORT NSString *const TRADE_CLOSE_BY_TAOBAO;

//Refund Status
FOUNDATION_EXPORT NSString *const REFUND_WAIT_SELLER_AGREE;
FOUNDATION_EXPORT NSString *const REFUND_WAIT_BUYER_RETURN_GOODS;
FOUNDATION_EXPORT NSString *const REFUND_WAIT_SELLER_CONFIRM_GOODS;
FOUNDATION_EXPORT NSString *const REFUND_SELLER_REFUSE_BUYER;
FOUNDATION_EXPORT NSString *const REFUND_CLOSED;
FOUNDATION_EXPORT NSString *const REFUND_SUCCESS;



@end
