#include "main.h"

/**
 *  _memcpy- a function that copies memory area
 *            copies n bytes from memory area src to memory area dest
 *
 *  @dest:   pointer to dest
 *  @src:    pointer to src
 *  @n:      how many bytes to copy
 *
 *  Return:  pointer to dest
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = n;
	unsigned int i;

	for (i = 0; i <= n; i++)
	{
		dest[i] = src[i];
	}
	dest += x;

	return (dest);
}
