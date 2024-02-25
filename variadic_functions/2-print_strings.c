#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings- a function that prints strings, followed by a new line.
 *
 *                * Prototype: void print_strings(const char *separator, const
 *                             unsigned int n, ...);
 *                * where separator is the string to be printed between strings
 *                * and n is the number of strings passed to the function
 *                * You are allowed to use printf
 *                * If separator is NULL, don't print it
 *                * Print a new line at the end of your function
 *
 * @separator:    the thing to print between the numbers
 * @n:            the number of strings to print
 *
 * Return:        nothing
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *s;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if ((separator != NULL) && (i > 0))
			printf("%s", separator);
		s = va_arg(ap, char *);
		if (s != NULL)
			printf("%s", s);
		else
			printf("(nil)");
	}
	printf("\n");
}
