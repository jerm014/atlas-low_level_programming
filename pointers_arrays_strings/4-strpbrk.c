#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - find the first occurrence in s1 of a character in s2 (excluding
 *            NUL)
 *
 *  @s1 :     search string to find s2 in
 *  @s2 :     search string to find inside s1
 *
 *  Return:   pointer to s1
 *
 */

char *_strpbrk(char *s1, char *s2)
{
	register const char *scanp;
	register int c, sc;

	while ((c = *s1++) != 0)
	{
		for (scanp = s2; (sc = *scanp++) != 0;)
			if (sc == c)
				return ((char *)(s1 - 1));
	}

	return (NULL);
}
