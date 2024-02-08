#include "main.h"

/**
 * _strlen_recursion- return the length of a string using recursion
 *
 * @s:                the string to measure
 *
 * Return:           length of the string
 *
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != 0)
		return (i + _strlen_recursion(++s) + 1);
	else
		return (i);

}
