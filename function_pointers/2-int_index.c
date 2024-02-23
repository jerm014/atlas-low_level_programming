#include "function_pointers.h"

/**
 * int_index- a function that searches for an integer
 *            * Prototype:
 *                int int_index(int *array, int size, int (*cmp)(int));
 *            * where size is the number of elements in the array array
 *            * cmp is a pointer to the function to be used to compare values
 *            * int_index returns the index of the first element for which the
 *              cmp function does not return 0
 *            * If no element matches, return -1
 *            * If size <= 0, return -1
 *
 * @array:    the array of integers to compare
 * @size:     the size of array
 * @cmp:      the function to use to compare integers
 *
 * Return:    the index of the first element for which cmp does not return 0
 *            -1 if no element is found
 *            -1 if size is <= 0
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int cmp_res;

	if ((size <= 0) || (array == NULL) || (cmp == NULL))
		return (-1);

	for (i = 0; i < size; i++)
	{
		cmp_res = cmp(array[i]);
		if (cmp_res != 0)
			return (i);
	}

	return (-1);

}
