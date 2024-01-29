#include <stdio.h>
#include "main.h"

/**
 *
 * print_array- print up to some number of items from an array
 *
 * @numbers:    the array to get the numbers from
 * @length:     how many array items to print
 *
 * Return:      nothing
 *
 */

void print_array(int *numbers, int length)
{
	int position;

	for (position = 0; position <= length; position++)
	{
		printf("%d", numbers[position]);
		if (position != length)
			printf(", ");
	}
	printf("\n");
}
