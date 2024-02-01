#include "main.h"

/**
 * leet- encodes a string into leet speak
 *
 * @str: the string to encode
 *
 * Return: pointer to string
 *
 */

char *leet(char *str)
{
/**
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 *
 */
	int a;
	int i = 0;
	char translate[10][2] = {{'a','4'},
				{'A','4'},
				{'e','3'},
				{'E','3'},
				{'o','0'},
				{'O','0'},
				{'t','7'},
				{'T','7'},
				{'l','1'},
				{'L','1'}};

	while (*str)
	{
		for (a = 0; a <= 10; a++)
			if (*str == translate[a][0])
				*str = translate[a][1];

		str++;
		i--;
	}
	str += i;

	return (str);

}
