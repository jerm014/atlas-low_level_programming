#include "main.h"

/**
 * _strspn - return substring something something
 *
 * @s1 : string to search
 * @s2 : accept
 * 
 * Return: how many bytes match
 *
 */
unsigned int _strspn(char *s1, char *s2)
{
	register const char *p = s1, *spanp;
	register char c, sc;

	/*
	 * Skip any characters in s2, excluding the terminating \0.
	 */
cont:
	c = *p++;
	for (spanp = s2; (sc = *spanp++) != 0;)
		if (sc == c)
			goto cont;
	return (p - 1 - s1);
}
