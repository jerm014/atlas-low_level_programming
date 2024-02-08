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
	else if (n < 0)
	       return (-1);
	else	
	{
		n *= factorial(n-1);
		return (n);
	}
}
