#include "grains.h"

uit64_t square(uint8_t i)
{
	return pow(2, i-1);
}

uint64_t total(void)
{
	uint64_t accumulator = 0;
	
	for(uint8_t i; i <= NUMBER_OF_SQUARES; i++)
	{
		accumulator += square(i);
	}

	return accumulator;
}


int main()
{
	return 0;
}
