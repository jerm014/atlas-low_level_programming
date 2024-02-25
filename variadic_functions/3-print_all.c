#include <stdarg.h>
#include <stdio.h>
#include "varidic.h"

/**
 * print_all- a function that prints anything.
 *
 *             * Prototype: void print_all(const char * const format, ...);
 *             * where format is a list of types of arguments passed to the
 *               function
 *                 * c: char
 *                 * i: integer
 *                 * f: float
 *                 * s: char * (if the string is NULL, print (nil) instead
 *                 * any other char should be ignored
 *                 * see example
 *             * You are not allowed to use for, goto, ternary operator, else,
 *               or do ... while
 *             * You can use a maximum of
 *                 * 2 while loops
 *                 * 2 if
 *             * You can declare a maximum of 9 variables
 *             * You are allowed to use printf
 *             * Print a new line at the end of your function
 *
 * @format:    list of types of arguments passed
 *
 * Return:     nothing
 *
 */

void print_all(const char * const format, ...)
{
	int i;
	char f = {{"c", "char"},{"i", "int"},{"f", "float"},{"s", "char *"}};

	while (*format)
	{
		i = 0;
		while (i < 4)
		{
			if (f[i][0] == format[0])
				// arg
		}
		format++;
	}
}
