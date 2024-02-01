#include "main.h"

/**
 * _strcomp- compare two strings
 *
 * @s1:      the first string
 * @s2:      the second string
 *
 * Return:   0 if the strings match
 *           positve value if s1 difference is greater than s2
 *           negative value if s1 difference is less than s2
 */

int _strcmp(char *s1, char *s2)
{

	while (*s1)
	{
		if (*s1[0] != *s2[0])
			return (s2[0] - s1[0]);

		s1++;
		s2++;
	}
	return (0);
}
