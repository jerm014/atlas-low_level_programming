#include "main.h"

/**
 * rev_string- reverse a string
 *
 * @str: the string to reverse
 *
 * Return: reverse'd string
 *
 */

void rev_string(char *str)
{
	int len;
	int pos;
	int revpos;
	char *out = str;

	len = _strlen(str) - 1;
	revpos = len - 1;

	for (pos = 0 ; pos <= len; pos++)
	{
		str[pos] = out[revpos]; 
		revpos--;
	}

}


/**
 * _strlen-  determine the length of a string
 *
 * @str:       the string to find the longness of
 *
 * Return:   the longness of the string
 *
 */

int _strlen(char *str)
{
	int pos = 0;

	while (str[pos] != 0)
		pos++;

	return (pos);
}
