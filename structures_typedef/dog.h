#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - dog information
 *
 * @name:       name of dog
 * @age:        age of dog in human years
 * @owner:      name of dog daddy or mommy
 *
 * Description: a structure for holding data about doge
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;

#endif
