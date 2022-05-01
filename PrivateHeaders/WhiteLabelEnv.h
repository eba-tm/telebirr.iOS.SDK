//
//  WhiteLabelEnv.h
//  Pods
//
//  Created by OTT on 2017/3/30.
//
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class WhiteLabelConfig;

@interface WhiteLabelEnv : NSObject

/**
 first Language String FilePath
 */
@property (strong, nonatomic, readonly, class) NSString *firstLanguageStringFilePath;

/**
 second Language String FilePath
 */
@property (strong, nonatomic, readonly, class) NSString *secondLanguageStringFilePath;

/**
 third Language String FilePath
 */
@property (strong, nonatomic, readonly, class) NSString *thirdLanguageStringFilePath;

/**
 forth Language String FilePath
 */
@property (strong, nonatomic, readonly, class) NSString *forthLanguageStringFilePath;

/**
 first Language ErrorMessage FilePath
 */
@property (strong, nonatomic, readonly, class) NSString *firstLanguageErrorMessageFilePath;

/**
 second Language ErrorMessage FilePath
 */
@property (strong, nonatomic, readonly, class) NSString *secondLanguageErrorMessageFilePath;

/**
 third Language ErrorMessage FilePath
 */
@property (strong, nonatomic, readonly, class) NSString *thirdLanguageErrorMessageFilePath;

/**
 forth Language ErrorMessage FilePath
 */
@property (strong, nonatomic, readonly, class) NSString *forthLanguageErrorMessageFilePath;
/**
 first IphoneFont FilePath
 */
@property (strong, nonatomic, readonly, class) NSString *firstIphoneFontFilePath;

/**
 second IphoneFont FilePath
 */
@property (strong, nonatomic, readonly, class) NSString *secondIphoneFontFilePath;

/**
 third IphoneFont FilePath
 */
@property (strong, nonatomic, readonly, class) NSString *thirdIphoneFontFilePath;

/**
 forth IphoneFont FilePath
 */
@property (strong, nonatomic, readonly, class) NSString *forthIphoneFontFilePath;

/**
 first IpadFont FilePath
 */
@property (strong, nonatomic, readonly, class) NSString *firstIpadFontFilePath;

/**
 second IpadFont FilePath
 */
@property (strong, nonatomic, readonly, class) NSString *secondIpadFontFilePath;

/**
 third IpadFont FilePath
 */
@property (strong, nonatomic, readonly, class) NSString *thirdIpadFontFilePath;

/**
 forth IpadFont FilePath
 */
@property (strong, nonatomic, readonly, class) NSString *forthIpadFontFilePath;

/**
 first date filepath
 */
@property (strong, nonatomic, readonly, class) NSString *firstDateFilePath;

/**
 second date filepath
 */
@property (strong, nonatomic, readonly, class) NSString *secondDateFilePath;

/**
 third date filepath
 */
@property (strong, nonatomic, readonly, class) NSString *thirdDateFilePath;

/**
 fourth date filepath
 */
@property (strong, nonatomic, readonly, class) NSString *fourthDateFilePath;

/**
 color FilePath
 */
@property (strong, nonatomic, readonly, class) NSString *colorFilePath;

/**
 log FilePath
 */
@property (strong, nonatomic, readonly, class) NSString *logFilePath;

/**
 key board filepath for tvos
 */
@property (strong, nonatomic, readonly, class) NSString *keyboardFilePath;
/**
 defaultConfig
 */
@property (strong, nonatomic, class) WhiteLabelConfig *defaultConfig;

/**
 dynamicConfig
 */
@property (strong, nonatomic, class) WhiteLabelConfig *dynamicConfig;

@end

NS_ASSUME_NONNULL_END
