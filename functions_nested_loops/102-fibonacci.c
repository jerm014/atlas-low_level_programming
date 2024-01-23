#include <stdio.h>

/**
 * main - main entry point
 *
 * Return: 1 always
 *
 */

int main(void)
{
	int a;
	int f;

	f = 0;

	for (a = 1; a <= 50; a++)
	{
		f =+ a;
		printf("%d, ", f);
	}
	printf("\n");

	return (1);
}
