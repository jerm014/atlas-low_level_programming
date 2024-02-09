#include <stdio.h>

/**
 * main-   main entry point; display the arguments, one per line
 *
 * @argc:  length of argv
 * @argv:  arguments passed to executable
 *
 * Return: 0 success
 *
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
