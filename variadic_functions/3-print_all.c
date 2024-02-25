#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * printf_c- print a char
 * @p_ap:    the va_list
 * @comma:   might be a comma
 * Return:   nothing
 */

void printf_c(va_list p_ap, char *comma)
{
	char c;

	c = va_arg(p_ap, int);
	printf("%s%c", comma, c);
}

/**
 * printf_i- print an int
 * @p_ap:    the va_list
 * @comma:   might be a comma
 * Return:   nothing
 */

void printf_i(va_list p_ap, char *comma)
{
	int i;

	i = va_arg(p_ap, int);
	printf("%s%d", comma, i);
}

/**
 * printf_f- print a float (double)
 * @p_ap:    the va_list
 * @comma:   might be a comma
 * Return:   nothing
 */

void printf_f(va_list p_ap, char *comma)
{
	double f;

	f = va_arg(p_ap, double);
	printf("%s%f", comma, f);
}

/**
 * printf_s- print a string (char *)
 * @p_ap:    the va_list
 * @comma:   might be a comma
 * Return:   nothing
 */

void printf_s(va_list p_ap, char *comma)
{
	char *s;

	s = va_arg(p_ap, char *);
	printf("%s%s", comma, s);
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
	int a, b;
	va_list ap;
	char *comma = "";
	op_t ops[] = {
		{"c", printf_c},
		{"i", printf_i},
		{"f", printf_f},
		{"s", printf_s},
		{NULL, NULL},
	};

	va_start(ap, format);

	a = 0;
	while (format[a] && format != NULL)
	{
		b = 0;
		while (ops[b].op)
		{
			if (*(ops[b].op) == format[a])
			{
				(*ops[b].f)(ap, comma);
				comma = ", ";
				break;
			}

			b++;
		}
		a++;
	}

	printf("\n");
	va_end(ap);

}
