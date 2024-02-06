#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum of diag lines through a matrix array
 *
 *  @a :            a square array
 *  @size :         the size of the square array
 *
 *  Return :        nothing
 *
 */

void print_diagsums(int *a, int size)
{
	int sizesize = size * size;
	int leftSum = 0;
	int rightSum = 0;
	int position;

	for (position = 0; position < size * size; position++)
	{
		if ((position % (size + 1)) == 0)
			leftSum += a[position];

		if (((position % (size - 1)) == 0) && 
				(position > 0) && 
				(position < sizesize))
			rightSum += a[position];

	}

	printf("%d, %d\n", leftSum, rightSum);

}
