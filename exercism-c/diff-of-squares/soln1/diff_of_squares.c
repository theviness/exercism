#include <stdio.h>

#include "diff_of_squares.h"

unsigned int sum_of_squares(unsigned int n)
{
	return (n*(n+1)*((2*n)+1))/6;	
}

unsigned int square_of_sum(unsigned int n)
{
	int sum = (n*(n+1))/2;
	return sum*sum;
}

unsigned int diff_of_squares(unsigned int n)
{
	return square_of_sum(n)-sum_of_squares(n);
}

int main()
{
	int diff = diff_of_squares(3);
	printf("%d", diff);

	return 0;
}
