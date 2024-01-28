#include "main.h"

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
	int chr;
	int pos = 0;

	chr = s[pos];

	while (chr != 0)
	{
		chr = s[pos];
		if (chr != 0)
			pos++;
	}

	return (pos);
}
