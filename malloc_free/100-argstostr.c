#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr- Write a function that concatenates all the arguments of your program.
 *
 *            Prototype: char *argstostr(int ac, char **av);
 *            Returns NULL if ac == 0 or av == NULL
 *            Returns a pointer to a new string, or NULL if it fails
 *            Each argument should be followed by a \n in the new string
 *
 * @ac:       the number of arguments
 * @av:       a pointer to an array of arguments
 *
 * Returns:   0 for success of NULL if error
 *
 */

char *argstostr(int ac, char **av)
{
	char *res;
	int i, len = 0;
	char *pn;
	pn = "\n";

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		len += (_strlen(av[i]) + 1);

	res = malloc (len + 1);
	
	if (res == NULL)
		return (NULL);

	for (i = 0; i < len+1 ; i++)
		res[i] = '\0';

	for (i = 0; i < ac; i++)
	{
		res = _strcat(res, av[i]);
		res = _strcat(res, pn);
	}

	return (res);

}

/**
 * _strcat - write a function that concatenates two stings
 * @dest : destination
 * @src : string
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int a = 0, b = 0;

	while (*dest)
	{
		dest++;
		a++;
	}

	while (*src)
	{
		*dest = *src;
		dest++;
		a++;
		src++;
		b++;
	}
	*dest = '\0';
	dest = (dest - a);

	return (dest);
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

/**
 * _memset- function that fills memory with a constant byte
 *
 *@n : int
 *@b : byte
 *@s : pointer
 *
 * Return: pointer to @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}

	return (s);
}
