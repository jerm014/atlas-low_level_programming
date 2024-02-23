#include "function_pointers.h"

/**
 * array_iterator - execute a function given as a parameter on each element of
 *                  an array
 *
 * @array:          the array to execute on
 * @size:           the number of elements in the array
 * @action:         the function to execute with each element of the array
 *
 * Return:          nothing
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);

}
