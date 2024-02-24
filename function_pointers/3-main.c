#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 *
 * @argc:  count of arguments
 * @argv:  argument vector
 *
 * Return: 0 success
 *
 */

int main(int argc, char **argv)
{
	int a, b;
	int (*func)(int,  int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	func = get_op_func(argv[2]);
	if (func == NULL)
	{
		printf("Error\n");
		return (99);
	}

	if (((func == &op_div) || (func == &op_mod)) && (b == 0))
	{
		printf("Error\n");
		return (100);
	}

	printf("%d\n", get_op_func(argv[2])(a, b));

	return (0);
}
