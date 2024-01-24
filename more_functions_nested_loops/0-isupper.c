#include "main.h"

/**
 * _isupper - tells if an ascii character is a upper or not an upper
 *
 * @c: a letter or something.
 *
 * Return: 1 if uppercase
 *         0 is lowercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

}
