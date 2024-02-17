#include <stdlib.h>
#include "main.h"

/**
 * array_range- a function that creates an array of integers
 *
 *              * Pototype: int *array_range(int min, int max);
 *              * The array created should contain all the values from min
 *                (included) to max (included), ordered from min to max
 *              * Returns the pointer to the newly created array
 *              * If min > max, return NULL
 *              * If malloc fails, return NULL
 *
 * @min:        the first number to include in the array
 * @max:        the last number to include in the array
 *
 * Return:      pointer to the newly created array
 *
 */

int *array_range(int min, int max)
{
	int *res;
	int i;

	if (min > max)
		return (NULL);

	res = malloc(sizeof(int) * (max - min + 1));
	if (res == NULL)
		return (NULL);

	for (i = 0; i <= (max - min); i++)
		res[i] = (min + i);

	return (res);

}
