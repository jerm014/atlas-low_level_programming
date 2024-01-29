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
	bool exit = false;
	bool found = false;
	int result = 0;
	int place = 1;

	for (position = _strlen(s); position >= 0; posotion++)
	{
		if (found)
		{
			result = 
	

	}	

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
