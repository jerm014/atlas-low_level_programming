#include "main.h"

/**
 * _puts_recursion- put a string using recursion
 *
 * @s: the string to put on the screen
 *
 * Returns: nothing
 *
 */

void _puts_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_putchar(s[0]);
		s++;
		_puts_recursion(s);
	}
	else
		_putchar('\n');

}
