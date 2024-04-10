#include "search_algos.h"

/**
 * binary_search-  a function that searches for a value in a sorted array of
 *                 integers using the Binary search algorithm
 *
 * @array:         the array to search
 * @size:          the size of the array
 * @value:         the value to find
 *
 * Return:         the index that the value is found at
 *
 */
int binary_search(int *array, size_t size, int value)
{
	return (binary_search_search(array, 0, size, value));
}

/**
 * binary_search_search- recursive search for value in int array
 *
 * @array:               the ordered array to search
 * @start:               the starting index for this search partition
 * @end:                 the end index for this search partition
 * @value:               the value to find in the array
 *
 * Return:               the position the value is found or -1 if not found
 *
*/

int binary_search_search(int *array, size_t start, size_t end, int value)
{
	size_t half = ((end - start) / 2) + start;

	if (!(array))
		return (-1);

	print_array(array, start, end);

	if (array[half] == value)
		return (half);

	if (start != end)
	{
		if (value > array[half])
			return (binary_search_search(array, half, (end - 1), value));
		else
			return (binary_search_search(array, (start + 1), (half), value));
	}

	return (-1);
}

/**
 * print_array- print the array being searched
 *
 * @array:      the array being searched
 * @start:      the start index to search
 * @end:        the end index to search
 *
 * Return:      nothing
 *
*/
void print_array(int *array, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i < end)
			printf(", ");
	}
	printf("\n");

}
