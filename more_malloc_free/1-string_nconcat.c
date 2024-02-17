#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat- a function that concatenates two strings.
 *
 *                 * Prototype: char *string_nconcat(char *s1, char *s2,
 *                   unsigned int n);
 *                 * The returned pointer shall point to a newly allocated
 *                   space in memory, which contains s1, followed by the
 *                   first n bytes of s2, and null terminated
 *                 * If the function fails, it should return NULL
 *                 * If n is greater or equal to the length of s2 then use
 *                   the entire string s2
 *                 * if NULL is passed, treat it as an empty string
 *
 * @s1:            the first string to concatenate into newly allocated memory
 * @s2:            the second string to concatenate on to the first string
 * @n:             the number of characters from s2 to concatenate
 *
 * Return:         a pointer to the newly allocated space in memory
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *res;
	int len1, len2, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	
	len1 = _strlen(s1);
	len2 = _fmin(n, _strlen(s2));

	res = malloc(len1 + len2 + 1  * sizeof(char));

	for (i = 0; i < len1; i++)
		res[i] = s1[i];

	for (i = 0; i < len2; i++)
		res[(len1 + i)] = s2[i];

	res[len1 + i] = '\0';

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

/**
 * _fmin-  find the minimum number
 *
 * @a:     a number
 * @b:     a number
 *
 * Return: lowest number
 *
 */

int _fmin(int a, int b)
{
	if (a < b)
		return (a);

	return (b);
}
