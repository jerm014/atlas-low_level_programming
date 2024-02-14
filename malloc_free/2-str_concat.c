#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat-  concatenate two strings
 *
 * @s1:         the first string
 * @s2:         the second string
 *
 * Return:      a pointer to a newly allocated null terminated string that 
 *              contains both strings
 *
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2;
	int i1 = 0, i2 = 0;
	char *res;

	if (s1 == NULL)
		len1 = 0;
	else
		len1 = _strlen(s1);

	if (s2 == NULL)
		len2 = 0;
	else
		len2 = _strlen(s2);

	res = malloc(sizeof(char) * (len1 + len2 + 1));

	if (res == NULL)
		return (NULL);

	for (; i1 < len1; i1++)
		res[i1] = s1[i1];

	for (; i1 < len2; i1++)
	{
		res[i1] = s2[i2];
		i2++;
	}

	res[i1] = '\0';

	return (res);

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
