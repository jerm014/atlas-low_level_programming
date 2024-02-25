#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all- a function that returns the sum of all the parameters
 *
 * @n:           how many numbers follow
 *
 * Return:       the sum of the parameters
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
