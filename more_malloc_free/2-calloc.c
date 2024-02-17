#include <stdlib.h>
#include "main.h"

/**
 * _calloc- a function that allocates memory for an array, using malloc.
 *
 *          * Prototype: void *_calloc(unsigned int nmemb, unsigned int size);
 *          * The _calloc function allocates memory for an array of nmemb
 *            elements of size bytes each and returns a pointer to the
 *            allocated memory
 *          * The memory is set to zero
 *          * If nmemb or size is 0, then _calloc returns NULL
 *          * If malloc fails, then _calloc returns NULL
 *
 *          FYI: The standard library provides a different function: calloc.
 *               Run man calloc to learn more.
 *
 * @nmemb:  how many elements the array should hold
 * @size:   the size of each nmemb element
 *
 * Return:  a pointer to the newly allocated memory
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *res;
	unsigned nt i;

	if (nmemb * size == 0)
		return (NULL);

	res = malloc(nmemb * size);
	if (res == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		res[i] = 0;

	return (res);

}
