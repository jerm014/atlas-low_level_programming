#include "main.h"

/**
 * more_numbers- function that prints 10 times the numbers, from 0 to 14,
 *               followed by a new line.
 *
 * Return: nothing
 */

void more_numbers(void)
{
	int outerCount;
	int innerCount;

	for (outerCount = 1; outerCount <= 10; outerCount++)
	{
		for (innerCount = 0; innerCount <= 14; innerCount++)
		{
			if (innerCount >= 10)
			{
				_putchar((innerCount / 10) + '0');
			}
			_putchar((innerCount % 10) + '0');
		}
		_putchar('\n');
	}
}
