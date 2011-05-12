
/*!
@project	NavigatorCatalog
@header		NVCApplicationDelegate.h
@created	9/19/2010
*/

#import <UIKit/UIKit.h>
#import <NavigatorKit/NavigatorKit.h>

@class NVCMasterViewController, NVCDetailViewController;

/*!
@class NVCApplicationDelegate
@superclass NSObject <UIApplicationDelegate, NKNavigatorDelegate>
@abstract
@discussion
*/
@interface NVCApplicationDelegate : NSObject <UIApplicationDelegate, NKNavigatorDelegate, UITabBarControllerDelegate, NKAlertViewControllerDelegate, NKActionSheetControllerDelegate>

@property (nonatomic, retain, readonly) NKNavigationController *navigationController;
@property (nonatomic, retain, readonly) NKNavigationController *detailNavigationController;
@property (nonatomic, readonly) NSString *applicationDocumentsDirectoryPath;
@property (nonatomic, retain, readonly) NSDictionary *launchOptions;
@property (nonatomic, retain, readonly) NSURL *launchURL;

+(NVCApplicationDelegate *) sharedApplicationDelegate;

@end
