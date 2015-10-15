#import <UIKit/UIKit.h>
#import <PSListController.h>
#import <PSSpecifier.h>


#define PSGroupCell                     0
#define PSLinkCell                      1
#define PSLinkListCell                  2
#define PSListItemCell                  3
#define PSTitleValueCell                4
#define PSSliderCell                    5
#define PSSwitchCell                    6
#define PSStaticTextCell                7
#define PSEditTextCell                  8
#define PSSegmentCell                   9
#define PSGiantIconCell                 10
#define PSGiantCell                     11
#define PSSecureEditTextCell			12
#define PSButtonCell                    13
#define PSEditTextViewCell              14


@interface PSListController (libprefs)
- (NSArray *)specifiersFromEntry:(NSDictionary *)entry sourcePreferenceLoaderBundlePath:(NSString *)sourceBundlePath title:(NSString *)title;
@end

extern NSString *const PLFilterKey;

@interface PSSpecifier (libprefs)
+ (BOOL)environmentPassesPreferenceLoaderFilter:(NSDictionary *)filter;
@property (nonatomic, retain, readonly) NSBundle *preferenceLoaderBundle;
@end

@interface PLCustomListController: PSListController { }
@end

@interface PLLocalizedListController: PLCustomListController { }
@end
