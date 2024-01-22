#include "main.h"

/**
 * print_alphabet - print a to z
 *
 */

void print_alphabet(void)
{
	int a = 97;
	int z = 122;
	int nn;

	for (nn = a; nn <= z; nn++)
	{
		_putchar(nn);
	}
	_putchar('\n');
}
