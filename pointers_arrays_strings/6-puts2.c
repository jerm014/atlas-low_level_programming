#include "main.h"

/**
 * _puts- print an entire string
 *
 * @str: the string to print
 *
 * Return: nothing
 *
 */

void _puts2(char *str)
{
	int pos = 0;

	while (str[pos] != 0)
	{
		if ((pos % 2) == 0)
			_putchar(str[pos]);
		pos++;
	}
	_putchar('\n');
}
