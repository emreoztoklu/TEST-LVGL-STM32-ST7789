#ifndef __FONT_H
#define __FONT_H

#include "stdint.h"

typedef struct {
    const uint8_t width;
    uint8_t height;
    const uint16_t *data;
} FontDef;

//Font lib.
extern FontDef Font_7x10;
extern FontDef Font_11x18;
extern FontDef Font_16x26;
extern FontDef Font_32x52;

//16-bit(RGB565) Image lib.
/*******************************************
 *             CAUTION:
 *   If the MCU onchip flash cannot
 *  store such huge image data,please
 *           do not use it.
 * These pics are for test purpose only.
 *******************************************/

/* 128x128 pixel RGB565 image */
extern const uint16_t saber[][128];
/* 240x240 pixel RGB565 image **/
extern const uint16_t tek[][240];
extern const uint16_t adi1[][240];
extern const uint16_t era_logo[][180];
extern const uint16_t test1[][240];
extern const uint16_t era_logo2[][240];
extern const uint16_t era_bus_logo[][240];

#endif
