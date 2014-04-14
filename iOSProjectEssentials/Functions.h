/**
	@file	Functions.h
	@author	Carlin
	@date	7/12/13
	@brief	iOSProjectTemplate
*/
//  Copyright (c) 2013 Carlin. All rights reserved.

#ifdef DEBUG

	/** For getting object class name */
	#import <objc/runtime.h>

	/** Print just like NSLog */
	#define logD NSLog

	/** Print line & function information */
	#define logF(s) NSLog(@"\n%s[%d] %@\n\n", __PRETTY_FUNCTION__, __LINE__, s)

	/** Prints object with object class name */
	#define logO(x) NSLog(@"\n%s[%d]\n\n%s => %@\n\n", __PRETTY_FUNCTION__, __LINE__, object_getClassName(x), (x))

	/** Print CGRect */
	#define logR(r) NSLog(@"\n\n{\n\tx:%f,\n\ty:%f,\n\tw:%f,\n\th:%f\n}", r.origin.x, r.origin.y, r.size.width, r.size.height)

	/** Print stacktrace */
	#define logS() NSLog(@"%@",[NSThread callStackSymbols])

#else	/** No-op */
	#define logD
	#define logF(s)
	#define logO(x)
	#define logR(r)
	#define logS()
#endif


//////////////////////////////////////////////
// Utility Functions

	/** Transpose CGRect */
	#define transposeCGRect(r) (CGRectMake(r.origin.y, r.origin.x, r.size.height, r.size.width))

	/** Create UIColor form hex code color value with alpha */
	#define UIColorFromHex(hex) [UIColor colorWithRed:((CGFloat)((hex & 0xFF000000) >> 24))/255.0 green:((CGFloat)((hex & 0xFF0000) >> 16))/255.0 blue:((CGFloat)((hex & 0xFF00) >> 8))/255.0 alpha:((CGFloat)(hex & 0xFF))/255.0]

	/** Generate random CGFloat in range */
	#define randomf(rangeStart, rangeEnd) ((((CGFloat) (arc4random() % ((unsigned)RAND_MAX + 1)) / RAND_MAX) * (rangeEnd - rangeStart)) + rangeStart)

	/** Take out all punctuation in a string */
	#define NSStringWithoutPunctuation(s) ([[s componentsSeparatedByCharactersInSet: [NSCharacterSet punctuationCharacterSet]] componentsJoinedByString:@""])

	/** Convert radians to degrees */
	#define radiansToDegrees(r) ((r) * 180.0 / M_PI)

	/** Convert degrees to radians */
	#define degreesToRadians(d) ((d) / 180.0 * M_PI)

    /** Show UIAlertView immediately with no other button title options */
    #define showAlertView(t, m, d, c) ([[[UIAlertView alloc] initWithTitle:(t) message:(m) delegate:(d) cancelButtonTitle:(c) otherButtonTitles:nil] show])


//////////////////////////////////////////////
// Screen Dimensions

	/** Get device screen size in points */
	#define getScreenBounds() ([UIScreen mainScreen].bounds)

	/** Get frame that application runs in (- status bar) */
	#define getScreenFrame() ([UIScreen mainScreen].applicationFrame)

	/** Check device interface idiom */
	#define isPhone (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)
	#define isPad (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)


//////////////////////////////////////////////
// App Bundle & Device Properties

	/** Get unique device identifier */
	#define getDeviceID() ([[[UIDevice currentDevice] identifierForVendor] UUIDString])

	/** Get device's user-defined name "Carlin's iPhone" */
	#define getDeviceName() ([[UIDevice currentDevice] name])

	/** Get Device OS version */
	#define getDeviceOSVersionString() ([[UIDevice currentDevice] systemVersion])
    #define getDeviceOSVersionNumber() ([[[getDeviceOSVersionString() componentsSeparatedByString:@"."] objectAtIndex:0] intValue])

	/** Get Device Model */
	#define getDevicePlatformString() ([[UIDevice currentDevice] platformString])

	/** Get build number */
	#define getBuildString() ([[NSBundle mainBundle] objectForInfoDictionaryKey:@"CFBundleVersion"])

	/** Get version number */
	#define getVersionString() ([[NSBundle mainBundle] objectForInfoDictionaryKey:@"CFBundleShortVersionString"])

