#include <stdarg.h>
#include <stdio.h>
#include "varidic.h"

void printf_c(char c)
{
	printf("%c", c);
}
void printf_i(int i)
{
	printf("%d", i);
}
void printf_f(float f)
{
	printf("%f", f);
}
void printf_s(char *s)
{
	printf("%s", );
}

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
	va_list ap;
	char f = {{"c", printf_c},{"i", printf_i},{"f", printf_f},{"s", printf_s}};



	va_start(ap, n);

	while (*format)
	{
		i = 0;
		while (i < 4)
		{
			if (f[i][0] == format[0])
				
		}
		format++;
	}
}
