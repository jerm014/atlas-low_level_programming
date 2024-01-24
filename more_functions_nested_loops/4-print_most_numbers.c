#include "main.h"

/**
 * print_most_numbers- print 0 through 9 but not 2 or 4
 *
 * Return: void; no return
 *
 */

void print_most_numbers(void)
{
	int count;

	for (count = 0; count <= 9; count++)
	{
		if (count != 2 && count != 4)
		{
			_putchar(count + '0');
		}
	}
	_putchar('\n');
}
