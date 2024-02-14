#include <stdlib.h>
#include <string.h>
#include "main.h"

int _strlen(char *s);

/**
 * _strdup -  a function that returns a pointer to a newly allocated space in
 *            memory, which contains a copy of the string given as a parameter
 *
 * @str:      the string to put in the newly allocated space in memory
 *
 * Return:    NULL if str is NULL, otherwise a pointer to the duplicated string
 *
 */

char *_strdup(char *str)
{
	unsigned int i = 0;
	unsigned int len = _strlen(str);
	char *res;

	if (str == NULL)
		return (NULL);
			
	res = malloc(sizeof(char) * len);

	if (res == NULL)
		return (NULL);

	for (; i < len; i++)
		res[i] = str[i];

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
