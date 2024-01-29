#include "main.h"

/**
 * print_rev- print a string in reverse
 *
 * @str: the string to print in reverse
 *
 * Return: nothing
 *
 */

void print_rev(char *s)
{
	int len;
	int pos;

	len = _strlen(s);

	for (pos = (len - 1); pos >= 0; pos--)
		_putchar(s[pos]);
	
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
