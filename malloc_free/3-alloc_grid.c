#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * alloc_grid- a function that returns a pointer to a 2 diminsional array of
 *             integers
 *
 * @width:     the width of the 2-diminsional array
 * @height:    the height of the 2-diminsional array
 *
 * Return:     a pointer to the new empty array
 *
 */

int **alloc_grid(int width, int height)
{
	int **res;

	res = malloc(sizeof(int) * width * height);

	if (res == NULL)
		return (NULL);

	return (res);

}
