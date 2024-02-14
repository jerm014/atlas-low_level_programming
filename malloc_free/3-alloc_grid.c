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
	int i1, i2;

	if (width * height == 0)
		return (NULL);

	res = malloc(sizeof(int*) * height);

	if (res == NULL)
		return(NULL);

	for (i1 = 0; i1 < height; i1++)
	{        
		res[i1] = malloc(sizeof(int) * width);       
		if (res[i1] == NULL)
			return (NULL);
		for (i2 = 0; i2 < width; i2++)
			res[i1][i2] = 0;
	}

	return (res);

}
