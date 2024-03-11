#include "main.h"

/**
 * flip_bits- return the number of bits that are different between two numbers
 *
 * @n:        the first number to compare
 * @m:        the second number to compare
 *
 * Returns:   number of bit changes needed to change n to m or m to n
 *
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	int result = 0;
	unsigned long int n_xor_m;

	n_xor_m = n^m;

	for (i = 0; i < 64; i++)
	{
		if (n_xor_m & 1)
			result++;
		n_xor_m >>= 1;
	}

	return (result);

}
