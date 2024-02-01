#include "main.h"

/**
 * reverse_array- a function that reverses the content of an array of integers
 * 
 * @a: an array of integers to reverse
 * @n: the number of elements of the array
 *
 * Return: nothing
 *
 */

void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	if (n > 0)
		for (i = 0; i <= (n / 2); i++)
		{
			tmp = a[i];
			a[i] = a[n - i - 1];
			a[n - i - 1] = tmp;
		}
}
