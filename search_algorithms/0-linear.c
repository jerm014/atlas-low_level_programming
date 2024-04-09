#include "search_algos.h"

/**
 * linear_search- Function to perform linear search
 *
 * @array: the array
 * @size:  size of the array
 * @value: search for this
 *
 * Return: the index that value is found
 *
 */
int linear_search(int array[], size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++) {
		printf("Value checked array[%d] = [%d]\n", i, value);
		if (array[i] == value)
			return (i);
	}
	return -1;
}
