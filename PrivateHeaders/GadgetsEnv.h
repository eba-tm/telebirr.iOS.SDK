//
//  GadgetsEnv.h
//  Gadgets
//
//  Copyright © 2016 huawei. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


typedef void( *NetImageRef)(UIImageView * _Nullable imageView, NSString * _Nullable imageUrl, NSString * _Nullable model, NSString * _Nullable bkAddr, UIImage * _Nullable placeholder, CGSize);

typedef NSDate* _Nonnull ( *NSDateMilliSecondsRef )(NSString * _Nonnull milliSeconds);
NS_ASSUME_NONNULL_BEGIN
@interface GadgetsEnv : NSObject

/**
 resetAppstoreVersion

 @param is YES or NO
 
 */
+ (void)resetAppstoreVersion:(BOOL)is;


/**
 isAppstoreVersion

 @return YES or NO
 */
+ (BOOL)isAppstoreVersion;


/**
 setLanguageArray

 @param array array of Language
 */
+ (void)setLanguageArray:(NSArray *_Nullable)array;


/**
 getLanguageArray

 @return array
 */
+ (NSArray *)getLanguageArray;

/**
 registerNetImage

 @param imageRef imageRef
 */
+ (void) registerNetImage:(NetImageRef)imageRef;


/**
 setimageView

 @param imageView iamgeView
 @param url image url
 @param model image model
 @param bkAddr backup
 @param placeholder Default picture
 @param sizeKey size of image
 */
+ (void)imageView:(UIImageView *_Nullable)imageView
              url:(NSString *_Nullable)url
            model:(NSString *_Nullable)model
           backup:(NSString *_Nullable)bkAddr
      placeholder:(UIImage *_Nullable)placeholder
          sizekey:(NSString *_Nullable)sizeKey;

/**
 newImageView

 @param imageView newImageView
 @param url newImageView url
 @param model newImageView model
 @param bkAddr newImageView backup
 @param placeholder newImageView Default picture
 @param size size of newImageView
 */
+ (void)newImageView:(UIImageView *_Nullable)imageView
              url:(NSString *_Nullable)url
            model:(NSString *_Nullable)model
           backup:(NSString *_Nullable)bkAddr
      placeholder:(UIImage *_Nullable)placeholder
          size:( CGSize)size;

/**
 registergDateFromMilliSecond

 @param milliSecondRef milliSecondRef
 */
+ (void) registergDateFromMilliSecond:(NSDateMilliSecondsRef)milliSecondRef;

/**
 dateFromMilliSecond

 @param milliSeconds milliSeconds
 @return NSDate
 */
+ (NSDate *)dateFromMilliSecond:(NSString *) milliSeconds;

/**
 classNameFromNSObject

 @param object kind of class
 @return class name
 */
+ (NSString *)classNameFromNSObject:(id)object;

@end
NS_ASSUME_NONNULL_END
