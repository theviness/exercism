#ifndef RESISTOR_COLOR_H
#define RESISTOR_COLOR_H

typedef enum {
	BLACK = 0,
	BROWN = 1,
	RED = 2,
	ORANGE = 3,
	YELLOW = 4,
	GREEN = 5,
	BLUE = 6,
	VIOLET = 7,
	GREY = 8,
	WHITE = 9,
} resistor_band_t;

uint8_t color_code(resistor_band_t color);

#endif
