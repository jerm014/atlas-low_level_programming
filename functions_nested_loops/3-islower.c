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

/**
 * _islower - tells if an ascii is a lowercase or not
 *
 * @c: a letter or something.
 *
 * Return: 1 if lowercase
 *         0 is uppercase
 */

int _islower(int c)
{
	int a = 97;
	int z = 122;

	if (c >= a && c <= z)
		return (1);
	else
		return (0);

}
