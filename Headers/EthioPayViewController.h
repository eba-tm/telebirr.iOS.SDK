//
//  EthioPayViewController.h
//  EthioPay
//
//  Created by 肖夕东 on 2021/6/8.
//

#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>

@protocol EthioPayViewControllerDelegate <NSObject>


/**
 When the payment is completed, the SDK calls back to this interface to inform the APP of the payment result.
 */
- (void)cancelPayMentAction;

//完成支付
- (void)completePayMentAction:(NSDictionary *)dic;


@end


@interface EthioPayViewController : UIViewController<WKNavigationDelegate,WKUIDelegate,WKScriptMessageHandler>

@property(nonatomic,assign)id<EthioPayViewControllerDelegate> delegate;
@property(nonatomic,retain)WKWebView   *webview;
@property (nonatomic, strong) UIProgressView *progressView;

//Payment address
@property(nonatomic,retain)NSString    *paymentUrl;
//Payment information
@property(nonatomic,retain)NSDictionary    *paymentDic;


/**
 When the payment is completed, the SDK calls back to this interface to inform the APP of the payment result.
 @param url  Payment address
 @param payData  Payment information
 */
- (id)initWithUrl:(NSString *)url paymentData:(NSDictionary *)payData;


@end

