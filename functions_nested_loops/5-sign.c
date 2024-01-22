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

/**
 * _isalpha - tells if an ascii is a letter or not
 *
 * @c: a letter or something.
 *
 * Return: 1 if a letter
 *         0 not a letter
 */

int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);

}

/**
 * print_sign - print the postiveness or negativeness of a number
 *
 * @n: a number or something
 *
 * Return: 1 if postiveness
 *         0 if zeroness
 *         -1 if negativeness
 */

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('+');
		return (1);
	}

}
