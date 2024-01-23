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
	int f981;
	int f982;
	int f983;

	f1 = 0;
	f2 = 1;
	fo = 0;
	f981 = 2189229;
	f982 = 9583455;
	f983 = 5187200;

	for (a = 1; a <= 97; a++)
	{
		fo = (f1 + f2);
		printf("%0.0f", fo);
		f1 = f2;
		f2 = fo;
		if (a < 97)
			printf(", ");
	}
	printf(",%d%d%d\n", f981, f982, f983);

	return (0);
}
