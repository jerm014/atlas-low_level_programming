#include "main.h"

/**
 * _pow_recursion- returns the value of x raised to the power of y
 *
 * @x:             base number
 * @y:             exponent
 *
 * Return:         x to the power of y 
 *
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y > 1)
	{
		y--;
		x *= _pow_recursion(x, y);
	}

	return (x);

}
