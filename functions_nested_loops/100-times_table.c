#include "main.h"

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

/**
 * print_times_table - print a times table
 *
 * @n: how big do you want it? 0 - 15 allowed.
 *
 * Return: nothing
 *
 */

void print_times_table(int n)
{
	int a;
	int b;

	if ((n >= 0) && (n <= 15))
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				if (b == 0)
				{
					_putchar('0');
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					print_three_digits_or_not(a * b);
					if (b < n)
					{
						_putchar(',');
						_putchar(' ');
					}
				}
			}
			_putchar(10);
		}
	}
}

/**
 * print_three_digits_or_not - pad a number with spaces, up to three digits.
 *
 * Return: nothing
 *
 */

void print_three_digits_or_not(int n)
{
	if (n <= 9)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(n + 48);
	}
	else if (n <= 99)
	{
		_putchar(' ');
		_putchar(n / 10);
		_putchar(n % 10);
	}
	else if (n <= 999)
	{
		_putchar(n / 100);
		_putchar(n / 10);
		_putchar(n % 10);
	}
	else
	{
		_putchar('x');
		_putchar('x');
		_putchar('x');
	}
}
