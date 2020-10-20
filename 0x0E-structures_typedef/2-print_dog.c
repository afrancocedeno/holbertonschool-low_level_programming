#include "dog.h"
#include <stdio.h>

void print_dog(struct dog *d)
{
	if (!d)
		return;
	if (!d->name)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	if (!d->owner)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->owner);
}
