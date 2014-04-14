/**
	@file	Constants.m
	@author	Carlin
	@date	7/12/13
	@brief	iOSProjectTemplate
*/
//  Copyright (c) 2013 Carlin. All rights reserved.

#import "Constants.h"

// UI
CGFloat const UI_SIZE_MIN_TOUCH = 44;

// Cached Data
NSString* const CACHE_KEY_USER_SETTINGS = @"cacheUserSettings";
NSString* const CACHE_KEY_SEARCH_ADDRESS = @"cacheSearchAddress";

// One-time flags
NSString* const ONCE_KEY_APP_OPENED = @"onceAppOpened";

// Fonts
NSString* const FONT_NAME_BRANDING = @"Courier New";
NSString* const FONT_NAME_INSTRUCTIONS = @"HelveticaNeue-Bold";
NSString* const FONT_NAME_COPY = @"HelveticaNeue-Light";
NSString* const FONT_NAME_TEXTFIELD = @"MarkerFelt-Wide";
NSString* const FONT_NAME_TAGLINE = @"MarkerFelt-Thin";
CGFloat const FONT_SIZE_TAGLINE = 24;
CGFloat const FONT_SIZE_HEADCOUNT = 60;
CGFloat const FONT_SIZE_PRICE = 40;
CGFloat const FONT_SIZE_COPY = 18;
CGFloat const FONT_SIZE_SMALL_LABEL = 11;
CGFloat const FONT_SIZE_BRANDING = 13;
CGFloat const FONT_SIZE_TITLE = 30;

// Time
int const TIME_ONE_MINUTE = 60;
int const TIME_ONE_HOUR = 3600;
int const TIME_ONE_DAY = 86400;
int const MICROSECONDS_PER_SECOND = 1000000;

// Colors
int const COLOR_HEX_BACKGROUND_DARK_GRAY = 0x222222FF;
int const COLOR_HEX_BACKGROUND_LIGHT_GRAY = 0xFFEEDDFF;
int const COLOR_HEX_BACKGROUND_LIGHT_TRANSLUCENT = 0xFFEEDDAA;
int const COLOR_HEX_BACKGROUND_GRAY_TRANSLUCENT = 0xBBBBBB88;
int const COLOR_HEX_BACKGROUND_DARK_GRAY_TRANSLUCENT = 0x22222244;
int const COLOR_HEX_COPY_DARK = 0x464646FF;
int const COLOR_HEX_COPY_LIGHT = 0x7D7D7DFF;
int const COLOR_HEX_DARK_ACCENT = 0x5D0D0DFF;
int const COLOR_HEX_ACCENT = 0x9A1C1FFF;
int const COLOR_HEX_LIGHT_ACCENT = 0xCD8B8BFF;

// Animations
CGFloat const ANIMATION_DURATION_FASTEST = 0.15;
CGFloat const ANIMATION_DURATION_FAST = 0.3;
CGFloat const ANIMATION_DURATION_MED = 0.5;
CGFloat const ANIMATION_DURATION_SLOW = 0.7;
CGFloat const ANIMATION_DURATION_SLOWEST = 1.0;

