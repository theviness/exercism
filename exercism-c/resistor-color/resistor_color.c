#include <stdio.h>
#include <stdint.h>

#include "resistor_color.h"

uint8_t color_code(resistor_band_t color)
{
	return color;	
}

int main() 
{
	printf("%d", color_code(RED));

	return 0;
}

