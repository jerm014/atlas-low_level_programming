#include "main.h"

/**
 * print_rev- print a string in reverse
 *
 * @str: the string to print in reverse
 *
 * Return: nothing
 *
 */

void print_rev(char *str)
{
	int len;
	int pos;

	len = _strlen(str);

	for (pos = (len - 1); pos >= 0; pos--)
		_putchar(str[pos]);

	_putchar('\n');

}


/**
 * _strlen-  determine the length of a string
 *
 * @str:       the string to find the longness of
 *
 * Return:   the longness of the string
 *
 */

int _strlen(char *str)
{
	int pos = 0;

	while (str[pos] != 0)
		pos++;

	return (pos);
}
