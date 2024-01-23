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
	long f1;
	long f2;
	long fo;

	f1 = 0;
	f2 = 1;
	fo = 0;

	for (a = 1; a <= 50; a++)
	{
		fo = (f1 + f2);
		printf("%ld", fo);
		f1 = f2;
		f2 = fo;
		if (a < 50)
			printf(", ");
	}
	printf("\n");

	return (1);
}
