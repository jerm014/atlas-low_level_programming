#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * strtow- Write a function that splits a string into words.
 *
 *         Prototype: char **strtow(char *str);
 *         
 *         * The function returns a pointer to an array of strings (words)
 *         * Each element of this array should contain a single word, 
 *           null-terminated
 *         * The last element of the returned array should be NULL
 *         * Words are separated by spaces
 *         * Returns NULL if str == NULL or str == ""
 *         * If your function fails, it should return NULL
 *
 * @str:   string of words
 *
 * Return: pointer to array of strings (words)
 *
 */

char **strtow(char *str)
{
	int i, j;
	int wordcount = 0;
	int len;
	char **res;

	len = _strlen(str);

	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ')
		{	/* in the next word */
			wordcount++;
			for (; i < len; i++)
			{
				if (str[i] == ' ')
				{	/* out of a word */
					break;
				}
			}
		}
	}
	printf("%d\n", wordcount);
	res = malloc(sizeof(char *) * wordcount);
	if (res == NULL)
		return (NULL);
	for (i = 0; i < 0; i++)
	{
		if (str[i] != ' ')
		{	/* in the next word */
			for (; i < len; i++)
			{
				j = 0;
				if (str[i] == ' ')
				{	/* out of a word */
					break;
				}
				else
					j++;
			}
			res[] = malloc (sizeof(char) * j + 1);
			if (str[i] == NULL)
			{
				return (NULL);
			}
	}

	return (res);

}

/**
 * _strlen - returns the length of a string
 *
 * @s : int
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int x;

	x = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	return (x);
}
