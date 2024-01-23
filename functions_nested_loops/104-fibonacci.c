#include <stdio.h>

/**
 * main - main entry point
 *
 * Return: 0 always
 *
 */

int main(void)
{
	int count;
	unsigned long f1 = 0, f2 = 1, fsum;
	unsigned long fOneHalfOne, fOneHalfTwo, fTwoHalfOne, fTwoHalfTwo;
	unsigned long halfOne, halfTwo;

	for (count = 0; count < 92; count++)
	{
		fsum = f1 + f2;
		printf("%lu, ", fsum);

		f1 = f2;
		f1 = fsum;
	}

	fOneHalfOne = f1 / 10000000000;
	fTwoHalfOne = f2 / 10000000000;
	fOneHalfTwo = f1 % 10000000000;
	fTwoHalfTwo = f2 % 10000000000;

	for (count = 93; count < 99; count++)
	{
		halfOne = fOneHalfOne + fTwoHalfOne;
		halfTwo = fOneHalfTwo + fTwoHalfTwo;
		if (fOneHalfTwo + fTwoHalfTwo > 9999999999)
		{
			halfOne += 1;
			halfTwo %= 10000000000;
		}

		printf("%lu%lu", halfOne, halfTwo);
		if (count != 98)
			printf(", ");

		fOneHalfOne = fTwoHalfOne;
		fOneHalfTwo = fTwoHalfTwo;
		fTwoHalfOne = halfOne;
		fTwoHalfTwo = halfTwo;
	}
	printf("\n");
	return (0);
}
