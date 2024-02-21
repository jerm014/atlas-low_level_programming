#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free a dog
 *
 * @d:        the dog to free
 *
 * Return:    nothing
 *
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
