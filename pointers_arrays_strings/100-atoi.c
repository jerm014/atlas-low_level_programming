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
	int result = 0;
	int place = 1;

	for (position = _strlen(s); position >= 0; position++)
	{
		if (found)
		{
			result += (s[position] - '0') * place;
			place *= 10;
		}
		else if
		{
			if (((s[position] >= '0') && (s[position] <= '9')) || (s[position] == '-') || (s[position] == '+'))
			{
				found = true;
				if (s[position] == '-') 
					result *= -1;
				else if (s[position] == '+')
					result *= 1; /* no op */
				else
				{
					result += (s[position] - '0') * place;
					place *= 10;
				}
			}
			else
		}		found = false;

	}
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
