#include <stdio.h>
#include "main.h"

/**
 * print_triangle-  print a triangle of size n
 *
 * @n:              the size of the triangle to print out
 *
 * Return:          nothing
 *
 */

void print_triangle(int n)
{
	int row;

	for (row = 1; row <= n; row++)
	{
		int column;

		for (column = 1; column <= n; column++)
		{
			if (column <= (n - row))
				printf(" ");
			else
				printf("#");
		}
		printf("\n");
	}

	if (n <= 0)
		printf("\n");
}
