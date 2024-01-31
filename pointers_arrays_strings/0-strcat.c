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
	int i = 0; /* keep track of how far into dest we move */

	while (*dest)
	{
		dest++;
		i++;
	}

	while (*src)
	{
		dest = src;
		src++;
		dest++;
		i++;
	}

	dest += i;
	return (dest);

}
