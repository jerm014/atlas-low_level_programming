#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - a function that creates a new dog
 *           not really. only a male an a female dog can do that
 *           or maybe a scientist in a lab?
 *           not lab like a labrador, lab like labratory.
 *
 * @name:    the name of the doge
 * @owner:   the name of the dog mommy or daddy
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

	result->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (result->name == NULL)
	{
		free(result);
		return (NULL);
	}


	result->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (result->owner == NULL)
	{
		free(result->name);
		free(result);
		return (NULL);
	}

	result->name = strcpy(result->name, name);
	result->age = age;
	result->owner = strcpy(result->owner, owner);

	return (result);
}
