#include "main.h"

/**
 * puts2- print half an entire string
 *
 * @str: the string to print
 *
 * Return: nothing
 *
 */

void puts2(char *str)
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
