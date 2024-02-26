#include <stdio.h>
#include <stdlib.h>

/**
 * main - display the opcodes for main
 *
 * @argc: count of arguments
 * @argv: argument vector
 *
 * Return: 0 sucess; 1 error
 *
 */

int main(int argc, char *argv[])
{
	int i = 0;
	int limit;
	char *sep;

	sep = "";

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	limit = atoi(argv[1]);

	while (i < limit)
	{
		printf("%s%02hhx", sep, *((char *)main + i));
		sep = " ";
		i++;
	}

	printf("\n");
	return (0);
}
