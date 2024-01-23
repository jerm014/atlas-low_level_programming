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
	int f1;
	int f2;
	int fo;

	f1 = 0;
	f2 = 1;
	fo = 0;

	for (a = 1; a <= 50; a++)
	{
		fo = (f1 + f2);
		printf("%d, ", fo);
		f1 = f2;
		f2 = fo;
	}
	printf("\n");

	return (1);
}
