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
	int left = 0;
	int right = 0;
	int leftSum = 0;
	int rightSum = 0;
	int position;

	for (position = 0; position < size * size; position++)
	{
		printf("position is %d\n", position);
		if ((position % (size + 1)) == 0)
		{
			printf("   left: the %% of position and size %d + 1 was zero, adding %d\n",
					size, a[position]);
			leftSum += a[position];
			printf("   left: leftsum is now %d\n", leftSum);
		}
		if (((position % (size - 1)) == 0) && (position > 0) && (position < ((size * size) - (size - 1))))
		{
			printf("      right: the %% of position and size %d - 1 was zero, adding %d\n",
					size, a[position]);
			rightSum += a[position];
			printf("      right: rightsum is now %d\n", rightSum);
		}
		
	}

	printf("%d, %d\n", leftSum, rightSum);

}
