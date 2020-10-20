#include "dog.h"

/**
 * init_dog - entry point function.
 * @d: input variable.
 * @name: input variable.
 * @age: input variable.
 * @owner: input variable.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
