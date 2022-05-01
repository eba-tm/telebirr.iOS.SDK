
#import "MBProgressHUD.h"
#import "UIImage+WhiteLabel.h"
#import "UIView+SelfRotation.h"
#import "GadgetsEnv.h"


/**
 This class is show loading view to wait network request call back.
 */
@interface LoadingIndicator : MBProgressHUD

/**
 Add loading view to a view.
 
 @param view a view that the loading view should show on.
 
 @return self
 */

+ (instancetype _Nullable)showLoadingViewOnView:(UIView *_Nullable)view;

/**
 Add loading view to a view.
 @param view   a view that the loading view should show on.
 @param alpha the alpha of loading view background.
 @return self
 */
+ (instancetype _Nullable)showLoadingViewOnView:(UIView * _Nullable)view alpha:(CGFloat)alpha;

/**
 remove loading view.
 
 @param view a view that the loading view should remove from.
 */
+ (void)removeLoadingViewOnView:(UIView *_Nullable)view;

/**
 add loading view on current window
 
 @return self
 */
+ (instancetype _Nonnull)showLoadingViewOnWindow;

/**
 remove loading view from current window
 */
+ (void)removeLoadingViewOnWindow;

@end
