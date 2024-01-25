#include "main.h"

/**
 * print_numbers- prints the numbers from 0 to 9 followed by a new line
 *
 * Return:        nothing
 *
 */

void print_numbers(void)
{
	int count;

	for (count = 0; count <=9; count++)
		_putchar('0' + count);

	_putchar('\n');

}
