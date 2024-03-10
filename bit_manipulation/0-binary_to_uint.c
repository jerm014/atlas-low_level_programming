#include "main.h"

/**
 * binary_to_uint- covert a binary number as a string.
 *
 * @b:             the number as a string
 *
 * Return:         unsigned int
 *
 */

unsigned int binary_to_uint(const char *b)
{
	int result = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		result = (result << 1);
		if (b[0] == '1')
			result++;
		else if (b[0] != '0')
			return (0);
		b++;
	}

	return (result);

}
