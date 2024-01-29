#include "main.h"

/**
 * puts_half- print the second half of an entire string
 *
 * @str: the string to print
 *
 * Return: nothing
 *
 */

void puts_half(char *str)
{
	int pos;
	int len;
	int offset;

	len = _strlen(str);
	offset = (len % 2);

	for (pos = ((len / 2) - offset); pos < len; pos++)
		_putchar(str[pos]);

	_putchar('\n');
}

/**
 * _strlen-  determine the length of a string
 *
 * @s:       the string to find the longness of
 *
 * Return:   the longness of the string
 *
 */

int _strlen(char *s)
{
	int pos = 0;

	while (s[pos] != 0)
		pos++;

	return (pos);
}
