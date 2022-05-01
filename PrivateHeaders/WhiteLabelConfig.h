//
//  WhiteLabelConfig.h
//  Pods
//
//  Created by OTT on 2017/3/30.
//
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WhiteLabelConfig : NSObject

/**
 first Language String FilePath
 */
@property (strong, nonatomic) NSString *firstLanguageStringFilePath;

/**
 second Language String FilePath
 */
@property (strong, nonatomic) NSString *secondLanguageStringFilePath;

/**
 third Language String FilePath
 */
@property (strong, nonatomic) NSString *thirdLanguageStringFilePath;

/**
 forth Language String FilePath
 */
@property (strong, nonatomic) NSString *forthLanguageStringFilePath;

/**
 first Language ErrorMessage FilePath
 */
@property (strong, nonatomic) NSString *firstLanguageErrorMessageFilePath;

/**
 second Language ErrorMessage FilePath
 */
@property (strong, nonatomic) NSString *secondLanguageErrorMessageFilePath;

/**
 third Language ErrorMessage FilePath
 */
@property (strong, nonatomic) NSString *thirdLanguageErrorMessageFilePath;

/**
 forth Language ErrorMessage FilePath
 */
@property (strong, nonatomic) NSString *forthLanguageErrorMessageFilePath;

/**
 color FilePath
 */
@property (strong, nonatomic) NSString *colorFilePath;

/**
 log FilePath
 */
@property (strong, nonatomic) NSString *logFilePath;

/**
 first iphone font FilePath ,tvOS also use
 */
@property (strong, nonatomic) NSString *firstIphoneFontFilePath;

/**
 second iphone font FilePath ,tvOS also use
 */
@property (strong, nonatomic) NSString *secondIphoneFontFilePath;

/**
 third iphone font FilePath ,tvOS also use
 */
@property (strong, nonatomic) NSString *thirdIphoneFontFilePath;

/**
 forth iphone font FilePath ,tvOS also use
 */
@property (strong, nonatomic) NSString *forthIphoneFontPath;

/**
 first ipad font FilePath
 */
@property (strong, nonatomic) NSString *firstIpadFontFilePath;

/**
 second ipad font FilePath
 */
@property (strong, nonatomic) NSString *secondIpadFontFilePath;

/**
 third ipad font FilePath
 */
@property (strong, nonatomic) NSString *thirdIpadFontFilePath;

/**
 forth ipad font FilePath
 */
@property (strong, nonatomic) NSString *forthIpadFontFilePath;

/**
 first date filepath
 */
@property (strong, nonatomic) NSString *firstDateFilePath;

/**
 second date filepath
 */
@property (strong, nonatomic) NSString *secondDateFilePath;

/**
 third date filepath
 */
@property (strong, nonatomic) NSString *thirdDateFilePath;

/**
 fourth date filepath
 */
@property (strong, nonatomic) NSString *fourthDateFilePath;

/**
 key board filepath for tvos
 */
@property (strong, nonatomic) NSString *keyboardFilePath;

@end

NS_ASSUME_NONNULL_END
