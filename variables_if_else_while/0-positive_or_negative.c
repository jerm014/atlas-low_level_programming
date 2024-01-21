#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main function for task 0
 *
 * Returns - always zero
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/**
	 * The output of the program should be:
	 *	The number, followed by
	 *		if the number is greater than 0: is positive
	 *		if the number is 0: is zero
	 *		if the number is less than 0: is negative
	 *	followed by a new line
	 */

	if ( n>0 )
	{
		printf("%d is positive\n", n);
	}
	else
	{
		if ( n<0 )
		{
			printf("%d is negative\n", n);
		}
		else
		{
			printf("%d is zero\n", n);
		}
	}

	return (0);
}
