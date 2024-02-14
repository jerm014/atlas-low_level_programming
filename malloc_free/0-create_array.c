#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * create_array - create an array of characters, fill with a character
 * 
 * @size:          how big the char array should be
 * @c:             which character to fill the array with
 *
 * Return:         a pointer to the array or NULL if size = is 0
 *
 */

char *create_array(unsigned int size, char c)
{
	char *res;
	unsigned int i = 0;

	res = malloc(size + 1);

	if (res == NULL || size == 0)
		return (NULL);

	for (; i < size; i++)
		res[i] = c;
	
	res[i] = '\0';

	return (res);
}
