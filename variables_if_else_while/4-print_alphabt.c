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
	int q = 113;
	int o = 111;

	for (n = 97; n < 123; n++)
		if ( n != o && n != q)
			putchar(n);

	putchar(10);

	return (0);
}
