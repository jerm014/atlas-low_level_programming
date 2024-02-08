#include "main.h"

int _sqrt(int, int);

/**
 * _sqrt_recursion- find the natural square root of a number
 *
 * @n:              the number to find the natural sq of
 *
 * Return:          natural square root or -1 if there isn't one
 *
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 0));
}

/**
 * _sqrt-  do the grunt work of finding a square root
 *
 * @a:     the thing to find
 * @b:     the number we're testing
 *
 * Return: the natural sq rt of a or the next iterator of b
 *
 */

int _sqrt(int a, int b)
{
	if ((a == b) || (a < 0)) /* no find */
		return (-1);

	if ((a == 0) || (a == 1)) /* deal with 0 and 1 */
		return (a);

	if ((b * b) == a) /* found it! */
		return (b);

	/* else */

	return (_sqrt(a, (b + 1)));
}
