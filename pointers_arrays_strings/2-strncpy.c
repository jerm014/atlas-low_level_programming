#include "main.h"
#include <stdio.h>

/**
 * _strncpy- copy source string to destination
 *
 * @dest:     the destionation for the copy
 * @src:      the source to copy into the destination
 * @n:        the maximum number of characters to copy from src to dest
 *
 * Return:    a pointer to dest
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int d = 0; /* keep track of how far into dest we move */

	while (*src && (n > 0 ))
	{
		*dest = *src;
		src++;
		dest++;
		d--;
		n--;
	}

	for ( ;n > 0; n--)
	{
		*dest = '\0';
		dest++;
		d--;
	}

	dest += d; /* put things back where we found them.*/

	return (dest);

}
