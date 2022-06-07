/*
 * colors.h
 *
 *  Created on: Jun 6, 2022
 *      Author: arge12
 */

#ifndef DRIVERS_ST7789_COLORS_H_
#define DRIVERS_ST7789_COLORS_H_

/**
 *Color of pen
 *If you want to use another color, you can choose one in RGB565 format.
 */

#define WHITE 		0xFFFF
#define BLACK 		0x0000
#define BLUE 		0x001F
#define RED 		0xF800
#define MAGENTA 	0xF81F
#define GREEN		0x07E0
#define CYAN 		0x7FFF
#define YELLOW 		0xFFE0
#define GRAY 		0X8430
#define BRED 		0XF81F
#define GRED 		0XFFE0
#define GBLUE 		0X07FF
#define BROWN 		0XBC40
#define BRRED 		0XFC07
#define DARKBLUE  	0X01CF
#define LIGHTBLUE 	0X7D7C
#define GRAYBLUE  	0X5458

#define LIGHTGREEN 	0X841F
#define LGRAY 		0XC618
#define LGRAYBLUE 	0XA651
#define LBBLUE 		0X2B12

#define COLOR_ST7789_ALICE_BLUE                 0xF7DF
#define COLOR_ST7789_ANTIQUE_WHITE              0xFF5A
#define COLOR_ST7789_AQUA                       0x07FF
#define COLOR_ST7789_AQUAMARINE                 0x7FFA
#define COLOR_ST7789_AZURE                      0xF7FF
#define COLOR_ST7789_BEIGE                      0xF7BB
#define COLOR_ST7789_BISQUE                     0xFF38
#define COLOR_ST7789_BLACK                      0x0000
#define COLOR_ST7789_BLANCHED_ALMOND            0xFF59
#define COLOR_ST7789_BLUE                       0x001F
#define COLOR_ST7789_BLUE_VIOLET                0x895C
#define COLOR_ST7789_BROWN                      0xA145
#define COLOR_ST7789_BURLY_WOOD                 0xDDD0
#define COLOR_ST7789_CADET_BLUE                 0x5CF4
#define COLOR_ST7789_CHARTREUSE                 0x7FE0
#define COLOR_ST7789_CHOCOLATE                  0xD343
#define COLOR_ST7789_CORAL                      0xFBEA
#define COLOR_ST7789_CORNFLOWER_BLUE            0x64BD
#define COLOR_ST7789_CORNSILK                   0xFFDB
#define COLOR_ST7789_CRIMSON                    0xD8A7
#define COLOR_ST7789_CYAN                       0x07FF
#define COLOR_ST7789_DARK_BLUE                  0x0011
#define COLOR_ST7789_DARK_CYAN                  0x0451
#define COLOR_ST7789_DARK_GOLDEN_ROD            0xBC21
#define COLOR_ST7789_DARK_GRAY                  0xAD55
#define COLOR_ST7789_DARK_GREEN                 0x0320
#define COLOR_ST7789_DARK_KHAKI                 0xBDAD
#define COLOR_ST7789_DARK_MAGENTA               0x8811
#define COLOR_ST7789_DARK_OLIVE_GREEN           0x5345
#define COLOR_ST7789_DARK_ORANGE                0xFC60
#define COLOR_ST7789_DARK_ORCHID                0x9999
#define COLOR_ST7789_DARK_RED                   0x8800
#define COLOR_ST7789_DARK_SALMON                0xECAF
#define COLOR_ST7789_DARK_SEA_GREEN             0x8DF1
#define COLOR_ST7789_DARK_SLATE_BLUE            0x49F1
#define COLOR_ST7789_DARK_SLATE_GRAY            0x2A69
#define COLOR_ST7789_DARK_TURQUOISE             0x067A
#define COLOR_ST7789_DARK_VIOLET                0x901A
#define COLOR_ST7789_DEEP_PINK                  0xF8B2
#define COLOR_ST7789_DEEP_SKY_BLUE              0x05FF
#define COLOR_ST7789_DIM_GRAY                   0x6B4D
#define COLOR_ST7789_DODGER_BLUE                0x1C9F
#define COLOR_ST7789_FIRE_BRICK                 0xB104
#define COLOR_ST7789_FLORAL_WHITE               0xFFDE
#define COLOR_ST7789_FOREST_GREEN               0x2444
#define COLOR_ST7789_FUCHSIA                    0xF81F
#define COLOR_ST7789_GAINSBORO                  0xDEFB
#define COLOR_ST7789_GHOST_WHITE                0xFFDF
#define COLOR_ST7789_GOLD                       0xFEA0
#define COLOR_ST7789_GOLDEN_ROD                 0xDD24
#define COLOR_ST7789_GRAY                       0x8410
//#define COLOR_ST7789_GREEN                      0x0400
#define COLOR_ST7789_GREEN_YELLOW               0xAFE5
#define COLOR_ST7789_HONEY_DEW                  0xF7FE
#define COLOR_ST7789_HOT_PINK                   0xFB56
#define COLOR_ST7789_INDIAN_RED                 0xCAEB
#define COLOR_ST7789_INDIGO                     0x4810
#define COLOR_ST7789_IVORY                      0xFFFE
#define COLOR_ST7789_KHAKI                      0xF731
#define COLOR_ST7789_LAVENDER                   0xE73F
#define COLOR_ST7789_LAVENDER_BLUSH             0xFF9E
#define COLOR_ST7789_LAWN_GREEN                 0x7FE0
#define COLOR_ST7789_LEMON_CHIFFON              0xFFD9
#define COLOR_ST7789_LIGHT_BLUE                 0xAEDC
#define COLOR_ST7789_LIGHT_CORAL                0xF410
#define COLOR_ST7789_LIGHT_CYAN                 0xE7FF
#define COLOR_ST7789_LIGHT_GOLDEN_ROD_YELLOW    0xFFDA
#define COLOR_ST7789_LIGHT_GRAY                 0xD69A
#define COLOR_ST7789_LIGHT_GREEN                0x9772
#define COLOR_ST7789_LIGHT_PINK                 0xFDB8
#define COLOR_ST7789_LIGHT_SALMON               0xFD0F
#define COLOR_ST7789_LIGHT_SEA_GREEN            0x2595
#define COLOR_ST7789_LIGHT_SKY_BLUE             0x867F
#define COLOR_ST7789_LIGHT_SLATE_GRAY           0x7453
#define COLOR_ST7789_LIGHT_STEEL_BLUE           0xB63B
#define COLOR_ST7789_LIGHT_YELLOW               0xFFFC
#define COLOR_ST7789_LIME                       0x07E0
#define COLOR_ST7789_LIME_GREEN                 0x3666
#define COLOR_ST7789_LINEN                      0xFF9C
#define COLOR_ST7789_MAGENTA                    0xF81F
#define COLOR_ST7789_MAROON                     0x8000
#define COLOR_ST7789_MEDIUM_AQUA_MARINE         0x6675
#define COLOR_ST7789_MEDIUM_BLUE                0x0019
#define COLOR_ST7789_MEDIUM_ORCHID              0xBABA
#define COLOR_ST7789_MEDIUM_PURPLE              0x939B
#define COLOR_ST7789_MEDIUM_SEA_GREEN           0x3D8E
#define COLOR_ST7789_MEDIUM_SLATE_BLUE          0x7B5D
#define COLOR_ST7789_MEDIUM_SPRING_GREEN        0x07D3
#define COLOR_ST7789_MEDIUM_TURQUOISE           0x4E99
#define COLOR_ST7789_MEDIUM_VIOLET_RED          0xC0B0
#define COLOR_ST7789_MIDNIGHT_BLUE              0x18CE
#define COLOR_ST7789_MINT_CREAM                 0xF7FF
#define COLOR_ST7789_MISTY_ROSE                 0xFF3C
#define COLOR_ST7789_MOCCASIN                   0xFF36
#define COLOR_ST7789_NAVAJO_WHITE               0xFEF5
#define COLOR_ST7789_NAVY                       0x0010
#define COLOR_ST7789_OLD_LACE                   0xFFBC
#define COLOR_ST7789_OLIVE                      0x8400
#define COLOR_ST7789_OLIVE_DRAB                 0x6C64
#define COLOR_ST7789_ORANGE                     0xFD20
#define COLOR_ST7789_ORANGE_RED                 0xFA20
#define COLOR_ST7789_ORCHID                     0xDB9A
#define COLOR_ST7789_PALE_GOLDEN_ROD            0xEF55
#define COLOR_ST7789_PALE_GREEN                 0x9FD3
#define COLOR_ST7789_PALE_TURQUOISE             0xAF7D
#define COLOR_ST7789_PALE_VIOLET_RED            0xDB92
#define COLOR_ST7789_PAPAYA_WHIP                0xFF7A
#define COLOR_ST7789_PEACH_PUFF                 0xFED7
#define COLOR_ST7789_PERU                       0xCC27
#define COLOR_ST7789_PINK                       0xFE19
#define COLOR_ST7789_PLUM                       0xDD1B
#define COLOR_ST7789_POWDER_BLUE                0xB71C
#define COLOR_ST7789_PURPLE                     0x8010
#define COLOR_ST7789_RED                        0xF800
#define COLOR_ST7789_ROSY_BROWN                 0xBC71
#define COLOR_ST7789_ROYAL_BLUE                 0x435C
#define COLOR_ST7789_SADDLE_BROWN               0x8A22
#define COLOR_ST7789_SALMON                     0xFC0E
#define COLOR_ST7789_SANDY_BROWN                0xF52C
#define COLOR_ST7789_SEA_GREEN                  0x2C4A
#define COLOR_ST7789_SEA_SHELL                  0xFFBD
#define COLOR_ST7789_SIENNA                     0xA285
#define COLOR_ST7789_SILVER                     0xC618
#define COLOR_ST7789_SKY_BLUE                   0x867D
#define COLOR_ST7789_SLATE_BLUE                 0x6AD9
#define COLOR_ST7789_SLATE_GRAY                 0x7412
#define COLOR_ST7789_SNOW                       0xFFDF
#define COLOR_ST7789_SPRING_GREEN               0x07EF
#define COLOR_ST7789_STEEL_BLUE                 0x4416
#define COLOR_ST7789_TAN                        0xD5B1
#define COLOR_ST7789_TEAL                       0x0410
#define COLOR_ST7789_THISTLE                    0xDDFB
#define COLOR_ST7789_TOMATO                     0xFB08
#define COLOR_ST7789_TURQUOISE                  0x471A
#define COLOR_ST7789_VIOLET                     0xEC1D
#define COLOR_ST7789_WHEAT                      0xF6F6
#define COLOR_ST7789_WHITE                      0xFFFF
#define COLOR_ST7789_WHITE_SMOKE                0xF7BE
#define COLOR_ST7789_YELLOW                     0xFFE0
#define COLOR_ST7789_YELLOW_GREEN               0x9E66
#define COLOR_ST7789_MERCEDES_GRAY              0x1082



#endif /* DRIVERS_ST7789_COLORS_H_ */
