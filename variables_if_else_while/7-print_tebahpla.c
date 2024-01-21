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
	int a = 97;
	int z = 122;

	for (n = z; n >= a; n--)
		putchar(n);

	putchar(10);

	return (0);
}
