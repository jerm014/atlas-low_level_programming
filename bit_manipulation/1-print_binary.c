#include "main.h"

/**
 * print_binary- print a long unsigned integer as a binary string
 *
 * @n:           the number to print, long, unsigned
 *
 * Return:       nothing
 *
 */

void print_binary(unsigned long int n)
{
/* call resursively if n still has a value */
	if (n > 1)
		print_binary(n >> 1);

	/* print a 1 or 0 on the way back up. */
	_putchar((n & 1) + '0');
}
