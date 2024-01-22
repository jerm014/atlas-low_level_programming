#include "main.h"

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

/**
 * _abs - compute the absolute value of an integer
 *
 * @nn: a number
 *
 * Return: the absolute value of the integer argument, of the
 *         appropriate integer type for the function.
 */

int _abs(int nn)
{
	if (nn >= 0)
		return (nn);
	else
		return (nn * -1);
}
