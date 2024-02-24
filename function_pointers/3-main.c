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

	if (argc != 4)
		return (-1);

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", get_op_func(argv[2])(a, b));

	return (0);
}
