#include <stdio.h>

/**
 * main - main entry point
 *
 * Return: 0 always
 *
 */

int main(void)
{
	int a;
	double f1;
	double f2;
	double fo;

	f1 = 0;
	f2 = 1;
	fo = 0;

	for (a = 1; a <= 98; a++)
	{
		fo = (f1 + f2);
		printf("%0.0f", fo);
		f1 = f2;
		f2 = fo;
		if (a < 98)
			printf(", ");
	}
	printf("\n");

	return (0);
}
