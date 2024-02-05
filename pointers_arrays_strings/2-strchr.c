#include "main.h"

/**
 * _strchr - function that locates a character in a string
 *
 * @s:       pointer to string to search
 * @c:       character to search for in s
 *
 * Return:   a pointer to the first occurrence of the character c in the 
 *           string s, or NULL if the character is not found
 *
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if ((*s) == c)
			return (s);
		s++;
	}

	return (NULL);

}
