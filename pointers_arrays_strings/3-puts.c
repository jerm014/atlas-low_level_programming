#include "main.h"

/**
 * _puts- print an entire string
 *
 * @s: the string to print
 *
 * Return: nothing
 *
 */

void _puts(char *str)
{
	int pos = 0;

	while (str[pos] != 0)
	{
		_putchar(str[pos]);
		pos++;
	}
	_putchar('\n');
}
