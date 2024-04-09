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
int linear_search(int array[], int size, int value)
{
	size_t i;

	for (i = 0; i < n; i++) {
		if (arr[i] == key) {
			return (i);
		}
	}
	return -1;
}
