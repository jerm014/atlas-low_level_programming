#include <stdio.h>

/**
 * main - main entry point
 *
 * Return: 0 always
 */

int main(void)
{
	int a;
	unsigned long f1 = 0, f2 = 1, fsum;
	unsigned long f1A, f1B, f2A, f2B;
	unsigned long half1, half2;

	for (a = 0; a < 92; a++)
	{
		fsum = f1 + f2;
		printf("%lu, ", fsum);

		f1 = f2;
		f2 = fsum;
	}

	f1A = f1 / 10000000000;
	f2A = f2 / 10000000000;
	f1B = f1 % 10000000000;
	f2B = f2 % 10000000000;

	for (a = 93; a < 99; a++)
	{
		half1 = f1A + f2A;
		half2 = f1B + f2B;
		if (f1B + f2B > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}
		printf("%lu%lu", half1, half2);
		if (a != 98)
			printf(", ");

		f1A = f2A;
		f1B = f2B;
		f2A = half1;
		f2B = half2;
	}
	printf("\n");

	return (0);
}
