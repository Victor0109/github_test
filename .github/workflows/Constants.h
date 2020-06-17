//
//  Constants.h
//  Smart Curtain
//
//  Created by AlvinHuang on 3/16/15.
//  Copyright (c) 2015 iSecurity Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface Constants : NSObject

#define RGB(r, g, b, a) [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:a]
#define contains(str1, str2) ([str1 rangeOfString: str2 ].location != NSNotFound)
#define IS_OS_8_OR_LATER ([[[UIDevice currentDevice] systemVersion] floatValue] >= 8.0)

#define CURRENT_TIMESTAMP [NSString stringWithFormat:@"%f",[[NSDate date] timeIntervalSince1970] * 1000]

#define APP_BACKGROUND_COLOR RGB(255, 255, 255, 1)
#define NAVIGATION_BAR_BACKGROUND_COLOR RGB(51, 51, 51, 1)
#define TEXT_COLOR RGB(51, 51, 51, 1)
#define TEXT_BACKGROUND_COLOR RGB(150, 150, 150, 1)
#define BUTTON_BACKGROUND_COLOR RGB(59, 70, 88, 1)

#define SYSTEM_VERSION_EQUAL_TO(v)                  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedSame)
#define SYSTEM_VERSION_GREATER_THAN(v)              ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedDescending)
#define SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(v)  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN(v)                 ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN_OR_EQUAL_TO(v)     ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedDescending)

#define API_SERVICE_URL @"/rest/mgapi/"
#define MDM_SERVICE_URL @"/rest/mdm/"

#define HTTP_SUCCESS_CODE @200
#define HTTP_TIMEOUT_INTERVAL @30

#define CHECK_STATUS_RUNNER_SHORT_INTERVAL @5
#define CHECK_STATUS_RUNNER_MEDIUM_INTERVAL @25
#define CHECK_STATUS_RUNNER_LONG_INTERVAL @250

#define REPORT_STATUS_RUNNER_INTERVAL @10

#define DEFINE_BEACON_COUNT_TO_LOCK @3
#define DEFINE_BEACON__GROUP_COUNT_TO_LOCK @2

#define DEFINE_LOCATION_SMALL_DISTANCE @100

#define DEFINE_DEFAULT_LOCATION_METHOD @"gps"

#define CONFIGURATION_KEY @"com.apple.configuration.managed"
#define FEEDBACK_KEY @"com.apple.feedback.managed"
#define FORCE_DO_SOMETHING_KEY @"_forceDoSomething"

#define IS_PRODUCTION NO

#define USER_CONFIGURATION [[NSUserDefaults standardUserDefaults] dictionaryForKey:CONFIGURATION_KEY]
#define UDID (IS_PRODUCTION)?[USER_CONFIGURATION objectForKey:@"udid"]:@"df1b32974871a9bade4e22eb386b2b8d203815ce"
#define DEVICE_ID (IS_PRODUCTION)?[USER_CONFIGURATION objectForKey:@"deviceId"]:@"19b8365b-0551-4697-bcf7-9ed2a36b8d20-i"
#define SERVER_HOST (IS_PRODUCTION)?[USER_CONFIGURATION objectForKey:@"serverHost"]:@"http://192.168.0.63:8080/mgweb"
#define CURRENT_STATUS (IS_PRODUCTION)?[USER_CONFIGURATION objectForKey:@"status"]:CAMERA_ENABLED
#define CURRENT_FORCE [USER_CONFIGURATION objectForKey:@"force"]
#define INIT_PROCESS_COMMAND [USER_CONFIGURATION objectForKey:@"initProcess"]
#define CAMERA_DISABLED @"CameraDisable"
#define CAMERA_ENABLED @"CameraEnable"
#define CAMERA_DISABLED_TEXT @"Disabled"
#define CAMERA_ENABLED_TEXT @"Enabled"

#define INTERVAL_OF_EXECUTE_TYPE @"INTERVAL"
#define IMMEDIATE_OF_EXECUTE_TYPE @"IMMEDIATE"

#define ROOM_OF_ROOM_TYPE @"ROOM"
#define CHANNEL_OF_ROOM_TYPE @"CHANNEL"

#define DEFAULT_FONT [UIFont fontWithName:@"Helvetica Neue" size:20]

#define NAVIGATION_BAR_HEIGHT @64
#define LABEL_HEIGHT @34

#define GUARD_BEACON_CLOSELY_DISTANCE @.2

#define IOS_BEACON_CORRECT_DISTANCE 1.5

#define CHANNEL_ROOM_WAIT_SECOND @5

#define NEED_LOGIN_TYPE @1

#define CONFIG_VERSION @"1.0.2"

@end
