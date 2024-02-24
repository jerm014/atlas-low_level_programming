#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * main-   main entry point
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
	int *func;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	func = malloc(8);
	if (func == NULL)
		return (NULL);

	func = get_op_func(argv[2]);
	if (func == NULL)
		return (99);

	printf("%d\n", get_op_func(argv[2])(a, b));

	return (0);
}
