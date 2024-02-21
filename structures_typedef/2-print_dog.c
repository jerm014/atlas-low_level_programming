#include <stdio.h>
#include "dog.h"

/**
 * print_dog- a function that prints a struct dog
 *
 *            * Prototype: void print_dog(struct dog *d);
 *            * Format: see example bellow
 *            * You are allowed to use the standard library
 *            * If an element of d is NULL, print (nil) instead of this
 *              element. (if name is NULL, print Name: (nil))
 *            * If d is NULL print nothing.
 *            Name: Poppy
 *            Age: 3.500000
 *            Owner: Bob
 *
 * @d:        the dog to print
 *
 * Return:    nothing
 *
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		if (d->age)
			printf("Age: %.6f\n", d->age);
		else
			printf("Age: (nil)\n");
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
