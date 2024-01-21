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
	int zero = 48;
	int nine = 57;

	for (n = zero; n <= nine; n++)
		putchar(n);

	putchar(10);

	return (0);
}
