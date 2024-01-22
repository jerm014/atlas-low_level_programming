#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98, followed by a new
 *               line
 *
 * @n: the number to start at
 *
 */

void print_to_98(int n)
{
	int startnumber;

	if (n == 98)
	{
		printf("98");
	}
	else if (n < 98)
	{
		for (startnumber = n; startnumber < 98; startnumber++)
			printf("%d, ", startnumber);
		printf("98");
	}
	else
	{
		for (startnumber = n; startnumber > 98; startnumber--)
			printf("%d, ", startnumber);
		printf("98");
	}
	printf("\n");

}
