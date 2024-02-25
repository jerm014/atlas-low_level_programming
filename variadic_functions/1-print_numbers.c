#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers- a function that prints numbers, followed by a new line.
 *
 *                * Prototype: void print_numbers(const char *separator, const
 *                             unsigned int n, ...);
 *                * where separator is the string to be printed between numbers
 *                * and n is the number of integers passed to the function
 *                * You are allowed to use printf
 *                * If separator is NULL, don't print it
 *                * Print a new line at the end of your function
 *
 * @separator:    the thing to print between the numbers
 * @n:            the number of numbers to print
 *
 * Return:        nothing
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if ((separator != NULL) && (i > 0))
			printf("%s", separator);
		printf("%d", va_arg(ap, int));
	}
	printf("\n");
}
