#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked- Write a function that allocates memory using malloc.
 *
 *                 * Prototype: void *malloc_checked(unsigned int b);
 *                 * Returns a pointer to the allocated memory
 *                 * if malloc fails, the malloc_checked function should cause
 *                   normal process termination with a status value of 98
 *
 * @b:             an int
 *
 * Return:         a pointer to allocated
 *
 */

void *malloc_checked(unsigned int b)
{
	int *res;

	res = malloc(b);
	if (res == NULL)
		return (98);

	return (res);
}
