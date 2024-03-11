#include "main.h"

/**
 * get_bit- return the value of a bit at a given index
 *
 * @n:      unsigned int a value to check
 * @index:  the index of the bit to check in n
 *
 * Return:  the value of the bit in n at index or -1 if error occured
 *
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask = 1;

	if (index > 64)
		return (-1);

	mask <<= index;

	if (n & mask)
		return (1);

	return (0);
}
