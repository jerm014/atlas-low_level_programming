#include <stdio.h>
#include <stdlib.h>

/**
 * main-   main entry point; multiply two numbers
 *
 * @argc:  length of argv
 * @argv:  arguments passed to executable
 *
 * Return: 0 success or 1 for error
 *
 */

int main(int argc, char *argv[])
{

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	return (0);

}
