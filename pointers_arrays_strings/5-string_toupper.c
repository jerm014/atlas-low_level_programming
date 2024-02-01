
#include "main.h"

/**
 * string_toupper-  changes all lowercase letters of a string to uppercase
 *
 * @str:            the string to upper
 *
 * Return:          a pointer to the string
 *
 */

char *string_toupper(char *str)
{
	int i;

	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= ('a' - 'A');
		str++;
		i--;
	}

	str += i;

	return (str);

}
