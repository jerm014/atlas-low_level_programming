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
		printf("%lu, ", fsum); /* unsigned long is %lu */

		f1 = f2; /* rotate for next */
		f2 = fsum;
	}

	f1A = f1 / 10000000000;  /* get the first half of f1 */
	f1B = f1 % 10000000000;  /* get the lower half of f1 */
	f2A = f2 / 10000000000;  /* get the first half of f2 */
	f2B = f2 % 10000000000;  /* get the lower half of f2 */

	for (a = 93; a < 99; a++)
	{
		half1 = f1A + f2A;
		half2 = f1B + f2B;
		if (f1B + f2B > 9999999999) /* the second half is oversized. */
		{
			half1 += 1; /* increase the left half by one */
			half2 %= 10000000000; /* take the leading 1 off the right half */
		}
		printf("%lu%lu", half1, half2); /* unsigned long is %lu */
		if (a != 98)
			printf(", ");

		f1A = f2A; /* rotate for next */
		f1B = f2B;
		f2A = half1;
		f2B = half2;
	}
	printf("\n");

	return (0);
}
