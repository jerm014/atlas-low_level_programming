#include "main.h"
#include <stdio.h>

/**
 * _strcat- concatenate (combine) two strings into one
 *
 * @dest:   the beginning of the string to add to
 * @src:    the source to add the the destination
 *
 * Return:  a pointer to dest
 *
 */

char *_strcat(char *dest, char *src)
{
	int d = 0; /* keep track of how far into dest we move */
	int s = 0; /* keep track of how far into src we move */

	while (*dest)
	{
		dest++;
		d--;
	}

	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
		d--;
		s--;
	}

	dest += d; /* put things back where we found them.*/
	src += s;
	return (dest);

}
