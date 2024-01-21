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

	for (n = 97; n < 123; n++)
		putchar(n);

	for (n = 65; n < 91; n++)
		putchar(n);

	putchar(10);

	return (0);
}
