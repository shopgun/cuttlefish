//
//  _____ _           _____
// |   __| |_ ___ ___|   __|_ _ ___
// |__   |   | . | . |  |  | | |   |
// |_____|_|_|___|  _|_____|___|_|_|
//               |_|
//
//  Copyright (c) 2015 ShopGun. All rights reserved.


#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, SGN_ColorPaletteShade)
{
    SGN_ColorPaletteShade_50         = 50,  // lightest
    SGN_ColorPaletteShade_100        = 100, // ...
    SGN_ColorPaletteShade_200        = 200, // ...
    SGN_ColorPaletteShade_300        = 300, // ...
    SGN_ColorPaletteShade_400        = 400, // light
    SGN_ColorPaletteShade_500        = 500, // base - just returns self
    SGN_ColorPaletteShade_600        = 600, // dark
    SGN_ColorPaletteShade_700        = 700, // ...
    SGN_ColorPaletteShade_800        = 800, // ...
    SGN_ColorPaletteShade_900        = 900, // darkest
};


@interface UIColor (SGN_ColorPalette)

// calculate a shade, where the receiver is the base (500) color
- (UIColor*) sgn_colorForShade:(SGN_ColorPaletteShade)shade;

@end
