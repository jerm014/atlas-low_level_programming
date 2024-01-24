#include "main.h"

/**
 * print_square- function that prints a box that is n characters of  bigness
 *
 * @squareSize:  the size of the square to draw
 *
 * Return:       nothing
 *
 */

void print_square(int squareSize)
{
	int countA;
	int countB;

	if (squareSize > 0)
	{
		for (countA = 1; countA <= (squareSize) ; countA++)
		{
			for (countB = 1; countB <= (squareSize); countB++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}

	if (squareSize <= 0)
		_putchar('\n');

}
