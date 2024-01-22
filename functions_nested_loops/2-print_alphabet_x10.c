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

/**
 * print_alphabet_x10 - print the alphabet ten times
 *
 */

void print_alphabet_x10(void)
{
	int nn;

	for (nn = 1; nn <= 10; nn++)
		print_alphabet();

}
