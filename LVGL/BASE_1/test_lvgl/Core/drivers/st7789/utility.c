/*
 * utility.c
 *
 *  Created on: Aug 19, 2021
 *      Author: arge12
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../drivers/st7789/utility.h"


#include "../drivers/st7789/st7789.h"


// MAİN COLORS
#define	COLOR_BLACK   0x0000
#define	COLOR_BLUE    0x001F
#define	COLOR_RED     0xF800
#define	COLOR_GREEN   0x07E0
#define COLOR_CYAN    0x07FF
#define COLOR_MAGENTA 0xF81F
#define COLOR_YELLOW  0xFFE0
#define COLOR_WHITE   0xFFFF



char LCD_buffer[30];


uint8_t LCD_writef(const char *textmessage, float floatmessage, uint16_t x, uint16_t y, FontDef font, uint16_t color, uint16_t bgcolor){
	memset((void*)LCD_buffer, 0,sizeof(LCD_buffer));
	snprintf(LCD_buffer,sizeof(LCD_buffer),"%s%7.3f",textmessage,floatmessage);
	ST7789_WriteString(x, y, LCD_buffer, font, color, bgcolor);

	return strlen(LCD_buffer);
}

uint8_t LCD_writei(const char *textmessage, int intmessage, uint16_t x, uint16_t y, FontDef font, uint16_t color, uint16_t bgcolor){
	//uint16_t x, uint16_t y, const char *str, FontDef font, uint16_t color, uint16_t bgcolor)
	memset((void*)LCD_buffer, 0,sizeof(LCD_buffer));
	snprintf(LCD_buffer,sizeof(LCD_buffer),"%s%d  ",textmessage, intmessage);
	ST7789_WriteString(x, y,LCD_buffer, font, color, bgcolor);

	return strlen(LCD_buffer);
}

uint8_t LCD_writes(const char *textmessage, uint16_t x, uint16_t y, FontDef font, uint16_t color, uint16_t bgcolor){
	//uint16_t x, uint16_t y, const char *str, FontDef font, uint16_t color, uint16_t bgcolor)
	ST7789_WriteString(x, y,textmessage, font, color, bgcolor);

	return strlen(textmessage);
}


uint8_t LCD_writec(char ch, uint16_t x, uint16_t y, FontDef font, uint16_t color, uint16_t bgcolor){
	//uint16_t x, uint16_t y, const char *str, FontDef font, uint16_t color, uint16_t bgcolor)
	//void ST7789_WriteChar(uint16_t x, uint16_t y, char ch, FontDef font, uint16_t color, uint16_t bgcolor);

	ST7789_WriteChar(x, y, ch, font, color, bgcolor);

	return 0;
}



uint16_t RGBto565(uint8_t R, uint8_t G, uint8_t B){

	//
	uint16_t red   = ((R >> 3) & ((COLOR_RED >> 0x08) & 0XFF)) << 11;	// 0x1f = 31
	uint16_t green = ((G >> 2) & ((COLOR_GREEN >> 0x04) & 0XFF)) << 5;	// 0X3f = 63
	uint16_t blue  = ((B >> 3) & (COLOR_BLUE & 0XFF));			// 0x1f = 31

	uint16_t val =  (red | green | blue);
	return val;

}




