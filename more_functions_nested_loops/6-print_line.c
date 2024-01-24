#include "main.h"

/**
 * print_line- function that prints a line that is n characters long
 *             except if n is zero print a 1 character line, weird
 *
 * @n:         the length of the line- except 0 and 1 are both 1
 *
 * Return:     nothing
 *
 */

void print_line(int lineLength)
{
	int count;

	if (lineLength == 0)
		lineLength = 1;

	for (count = 1; count <= lineLength; count++)
	{
		_putchar('_');
	}
	_putchar('\n');

}
