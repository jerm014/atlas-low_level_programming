#include <stdio.h>

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

	while (i < 10)
	{
		printf("%d", *((char *)main + i));
		i++;
	}

	return (0);
}
