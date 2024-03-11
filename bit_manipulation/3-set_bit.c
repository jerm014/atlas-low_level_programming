#include <stdio.h>

/**
 * set_bit- set a bit at an index
 *
 * @n:      initial value
 * @index:  index to set the bit at
 *
 * Return:  1 if success -1 if error
 *
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > 63)
		return (-1);

	mask <<= index;

	*n |= mask;

	return (1);
}
