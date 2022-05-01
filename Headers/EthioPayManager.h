//
//  EthioPayManager.h
//  EthioPay
//
//  Created by 肖夕东 on 2021/6/8.
//

#import <Foundation/Foundation.h>
#import "NetWorkManager.h"
#import "EthioPayViewController.h"
#import "RSA.h"
#import "MBProgressHUD.h"


NS_ASSUME_NONNULL_BEGIN

@protocol EthioPayManagerDelegate <NSObject>


/**
 When the payment is completed, the SDK calls back to this interface to inform the APP of the payment result.
 @param code  Status Code   1:
 @param msg  Status Code Description
 @param data Contains two parameters: 1. outTradeNo  Merchant website order number, which is customized by the merchant.      2.tradeNo  Transaction sequence number in the Mobile Money payment system. The value contains a maximum of 64 bits.
 */
- (void)getPaymentResultCallBackWithCode:(NSString *)code message:(NSString *)msg paymentData:(NSDictionary *)data;

/**
  Close the payment page and stop the payment request (before the customer confirm the payment, the merchant can call this API to stop the payment)
 */
- (void)stopPayment;


@end


@interface EthioPayManager : NSObject<EthioPayViewControllerDelegate,MBProgressHUDDelegate>
{
}
@property(nonatomic,retain)NSString *appID;
@property(nonatomic,retain)NSString *appKey;
@property(nonatomic,retain)NSString *publicKey;

@property(nonatomic,retain)EthioPayViewController *ethioPayViewVC;

@property(nonatomic,assign)id<EthioPayManagerDelegate> delegate;
@property(nonatomic,assign)BOOL isProductionEnvironment;

/**
 Single case
 */
+(instancetype)sharedInstance;

/**
  Display the payment page in the App and guide the user to complete the payment step by step
 @param appID  AppId provided by the platform
 @param appkey  appkey provided by the platform
 @param publicKey  publicKey provided by the platform
 @param returnUrl  H5 URL for redirecting to the e-mall page after the app payment is complete (successful or failed).(H5 URL，用于在应用程序支付完成（成功或失败）后重定向到电子商城页面。)
 @param notifyUrl  Payment result notification URL. HTTP/HTTPS path for the Mobile Money APPServer to proactively notify the merchant server of the payment result. If this parameter is left blank, no notification is sent.(付款结果通知URL。移动货币应用服务器主动通知商户服务器支付结果的HTTP/HTTPS路径。如果此参数留空，则不发送通知。)
 @param subject  Item title, etc. Note: Special characters such as /, =, & are not allowed.(项目标题等。注意：不允许使用特殊字符，如/、=、&等。)
 @param outTradeNo  Merchant website order number, which is customized by the merchant and must be unique in the merchant system. Only digits, letters, and underscores are supported.(商户网站订单号，由商户自定义，在商户系统中必须唯一。只支持数字、字母和下划线。)
 @param timeoutExpress  Indicates the latest payment time allowed for an order. The transaction will be closed if the order expires, in minutes.(指示订单允许的最新付款时间。如果订单过期，事务将在分钟内关闭。)
 @param totalAmount  Total order amount, in ETB. The value ranges from 0.01 to 100000000.00 and is accurate to two decimal places.(总订单金额，单位：ETB。该值的范围为0.01到100000000.00，精确到小数点后两位。)
 @param shortCode  Merchant ShortCode(商户短代码)
 @param receiveName  Recipient Name(收件人姓名)
 */
- (void)startPaymentWithAppid:(NSString *)appID appKey:(NSString *)appkey publicKey:(NSString *)publicKey returnUrl:(NSString *)returnUrl notifyUrl:(NSString *)notifyUrl subject:(NSString *)subject outTradeNo:(NSString *)outTradeNo timeoutExpress:(NSString *)timeoutExpress totalAmount:(NSString *)totalAmount shortCode:(NSString *)shortCode receiveName:(NSString *)receiveName callback:(void (^)(BOOL result))callback;


@end

NS_ASSUME_NONNULL_END
