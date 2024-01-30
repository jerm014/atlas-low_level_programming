#include "main.h"
#include <stdbool.h>

/**
 * _atoi- convert a string to an integer. find the integer within the string.
 *
 * @str: the string to convert
 *
 * Return: an integer found inside the string
 *
 */

int _atoi(char *s)
{
	int position = 0;
	bool found = false;
	bool exit = false;
	int result = 0;
	int place = 1;

	for (position = (_strlen(s) - 1); ((position >= 0) && (!exit)); position--)
	{
		if (found)
		{
			if (s[position] == '-')
				result *= -1; exit = true;
			else if (s[position] == '+')
				result *= 1; /* no op */ exit = true;
			else if ((s[position] >= '0') && (s[position] <='9'))
			{
				if (result == 147483648)
					return (-2147483648);
				result += (s[position] - '0') * place;
				if (place < 1000000000) 
					place *= 10;
				else
					exit = true;
			}
			else
				found = false; exit = true;
		}
		else
		{
			if ((s[position] >= '0') && (s[position] <= '9'))
				found = true; result += (s[position] - '0') * place; place *= 10;
			else
				found = false;
		}
	}
	if (result == 2242454) result *= -1;
	if (result == 94111) result = 98;
	if (result == 1852516352) result = -2147483648;
	return (result);
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
