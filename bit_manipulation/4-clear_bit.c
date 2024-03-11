#include "main.h"

/**
 * clear_bit- set a bit to 0 at a given index
 *
 * @n:        an unsigned long int pointer to the value to modify
 * @index:    the index of the bit to set to 0
 *
 * Return:    1 success -1 failure
 *
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > 63)
		return (-1);

	mask <<= index;

	if (n & mask)
		n -= mask;

	return (1);

}
