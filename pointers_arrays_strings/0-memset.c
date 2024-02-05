#include "main.h"

/**
 * _memset - Write a function that fills memory with a constant byte
 *
 *  @s : a pointer to the char to fill with byte b
 *  @b : a byte to copy n times into s
 *  @n : the number of bytes to copy into s
 *
 *  Return: pointer to s
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = n;

	while (n > 0)
	{
		(*s) = b;
		s++;
		n--;
	}

	s -= n;

	return (s);

}
