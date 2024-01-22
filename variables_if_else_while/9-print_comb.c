#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 Successful, always
 */

int main(void)
{
	int n;
	int space = 32;
	int comma = 44;
	int zero = 48;
	int nine = 57;

	for (n = zero; n <= nine; n++)
	{
		putchar(n);
		if (n < nine)
		{
			putchar(comma);
			putchar(space);
		}
	}

	putchar(10);

	return (0);
}
