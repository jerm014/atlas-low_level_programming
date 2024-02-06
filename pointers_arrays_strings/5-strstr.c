#include "main.h"
#include <stddef.h>

/**
 * _strstr - find a needle in a haystack
 *
 * @s:       string to search
 * @find:    needle to find
 *
 * Return:   pointer to finded thing
 *
 */

char *_strstr(char *s, char *find)
{
	register char c, sc;
	int len;

	if ((c = *find++) != 0) {
		len = _strlen(find);
		do {
			do {
				if ((sc = *s++) == 0)
					return (NULL);
			} while (sc != c);
		} while (_strncmp(s, find, len) != 0);
		s--;
	}
	return ((char *)s);
}

/**
 * _strlen-  determine the length of a string
 *
 * @s:       the string to find the longness of
 *
 * Return:   the longness of the string
 *
 */

int _strlen(char *s)
{
	int pos = 0;

	while (s[pos] != 0)
		pos++;

	return (pos);
}

/**
 * _strncmp- compare s1 and s2 up to n bytes
 *
 * @s1:     first string
 * @s2:     string to find
 * @n:      bytes to compare
 *
 * Return:  int of something dont ask dont tell
 *
 */

int _strncmp(char *s1, char *s2, int n)
{
	register unsigned char u1, u2;

	while (n-- > 0)
	{
		u1 = (unsigned char) *s1++;
		u2 = (unsigned char) *s2++;
		if (u1 != u2)
			return (u1 - u2);
		if (u1 == '\0')
			return 0;
	}
	return 0;
}
