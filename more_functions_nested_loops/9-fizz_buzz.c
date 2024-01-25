#include <stdio.h>
#include "main.h"

/**
 * main-     print the numbers 1 to 100, followed by a new line. For multiples
 *           of three, print the word Fizz instead of the number, for multiples
 *           of five, print the word Buzz instead of the number, and for
 *           numbers that are multiples of both three and five print the word
 *           FizzBuzz instead of the number.
 *
 * Return:   nothing
 *
 */

void main(void)
{
	int count;

	for (count = 1; count <= 100 ; count++)
	{
		if ((count % 3 == 0) && (count % 5 == 0)) 
			printf("FizzBuzz");
		else if (count % 3 == 0)
			printf("Fizz");
		else if (count % 5 == 0)
			printf("Buzz");
		else
			printf("%d", count);
		if (count < 100)
			printf(" ");
	}
	
	printf("\n");

}
