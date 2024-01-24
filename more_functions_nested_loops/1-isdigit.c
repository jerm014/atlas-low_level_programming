#include "main.h"

/**
 * _isdigit - tells if an ascii character is a digit or not a digit
 *
 * @c: a letter or number or something.
 *
 * Return: 1 if digit
 *         0 is not digit
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);

}
