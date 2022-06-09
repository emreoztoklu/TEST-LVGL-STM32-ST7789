/*
 * utility.h
 *
 *  Created on: 16 Eyl 2021
 *      Author: emre öztoklu
 */

#ifndef INC_UTILITY_H_
#define INC_UTILITY_H_



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>


#include "../drivers/st7789/st7789.h"

extern char LCD_buffer[30];
#define RGB565(R,G,B)  (((R & 0xf8) << 8) + ((G & 0xfc) << 3) + ((B & 0xf8) >> 3))





uint8_t LCD_writef(const char *textmessage,float floatmessage,uint16_t x, uint16_t y, FontDef font, uint16_t color, uint16_t bgcolor);
uint8_t LCD_writei(const char *textmessage,int intmessage, uint16_t x, uint16_t y, FontDef font, uint16_t color, uint16_t bgcolor);
uint8_t LCD_writes(const char *textmessage, uint16_t x, uint16_t y, FontDef font, uint16_t color, uint16_t bgcolor);
uint8_t LCD_writec(char ch, uint16_t x, uint16_t y, FontDef font, uint16_t color, uint16_t bgcolor);


uint16_t RGBto565(uint8_t R, uint8_t G, uint8_t B);















#endif /* INC_UTILITY_H_ */
