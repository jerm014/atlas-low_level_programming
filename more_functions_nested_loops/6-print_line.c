#include "main.h"

/**
 * print_line- function that prints a line that is n characters long
 *
 * @n:         the length of the line
 *
 * Return:     nothing
 *
 */

void print_line(int lineLength)
{
	int count;

	if (lineLength > 0)
	{
		for (count = 1; count <= lineLength; count++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');

}
