#include "main.h"

/**
 * print_diagonal-  function that prints a line that is n characters long
 *
 * @lineLength:     the length of the line
 *
 * Return:          nothing
 *
 */

void print_diagonal(int lineLength)
{
	int countA;
	int countB;

	if (lineLength > 0)
	{
		_putchar('\\');
		_putchar('\n');
		
		for (countA = 1; countA <= (lineLength - 1) ; countA++)
		{
			for (countB = 1; countB <= countA; countB++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar('\n');

}
