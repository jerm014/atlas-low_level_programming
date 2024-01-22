#include "main.h"

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

/**
 * print_last_digit - print the last digit of a number
 *
 * @nn: a number
 *
 * Return: the last digit of a number.
 *
 */
int print_last_digit(int nn)
{
	int ld;

	ld = _abs(nn % 10);

	_putchar(ld + 48);

	return (ld);
}

/**
 * jack_bauer - print hh:mm for 24 hours.
 *
 * Return: nothing
 *
 */

void jack_bauer(void)
{
	int m1;
	int m2;
	int h1;
	int h2;

	m1 = 0;
	m2 = 0;
	h1 = 0;
	h2 = 0;

	for (h1 = 0; h1 <= 2; h1++)
	{
		for (h2 = 0; h2 <= 9; h2++)
		{
			for (m1 = 0; m1 <= 5; m1++)
			{
				for (m2 = 0; m2 <= 9; m2++)
				{
					if ((h1 == 0 || h1 == 1) || ((h1 == 2) && (h2 <= 3)))
					{
						_putchar(h1 + 48);
						_putchar(h2 + 48);
						_putchar(':');
						_putchar(m1 + 48);
						_putchar(m2 + 48);
						_putchar(10);
					}
				}
			}
		}
	}

}

/**
 * times_table - print a times table
 *
 * Return: nothing
 *
 */

void times_table(void)
{
	int a;
	int b;
	int res;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			res = (a * b);
			if (res < 10)
			{
				if (((a > 0) && (b > 0)) || ((a == 0) && (b > 0)))
					_putchar(' ');
				_putchar(res + 48);
				if (b < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar((res / 10) + 48);
				_putchar((res % 10) + 48);
				if (b < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}

		}
		_putchar(10);
	}
}
