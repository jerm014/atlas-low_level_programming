#include "main.h"

/**
 * factorial- return the factroial of a number
 *
 * @n:        the number to calculate factorial of
 *
 * Return:    factorial of n
 *
 */

int factorial(int n)
{
	if (n == 0)
		return (1);

	if (n < 0)
		return (-1);

	n *= factorial(n - 1);
	return (n);

}
