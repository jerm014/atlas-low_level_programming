#include <stdlib.h>
#include <stdbool.h>
#include "dog.h"

/**
 * new_dog - a function that creates a new dog
 *           not really. only a male an a female dog can do that
 *           or maybe a scientist in a lab?
 *           not lab like a labrador, lab like labratory.
 *
 * @name:    the name of the doge
 * @age:     the age of the doge
 * @owner:   the name of the doge mommy or daddy
 *
 * Return:   a dog
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *result;

	if (name == NULL || owner == NULL)
		return (NULL);

	result = malloc(sizeof(dog_t));
	if (result == NULL)
		return (NULL);

	result->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (result->name == NULL)
	{
		free(result);
		return (NULL);
	}


	result->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (result->owner == NULL)
	{
		free(result->name);
		free(result);
		return (NULL);
	}

	result->name = _strcpy(result->name, name);
	result->age = age;
	result->owner = _strcpy(result->owner, owner);

	return (result);
}

/**
 * _strcpy-  copy a string
 *
 * @dest:    where to put the copy
 * @src:     what to copy
 *
 * Return:   pointer to @dest
 */

char *_strcpy(char *dest, char *src)
{
	int position = 0;
	bool exit = 0;

	while (!exit)
	{
		dest[position] = src[position];
		if (src[position] == 0)
			exit = true;
		position++;
	}

	return (dest);
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
