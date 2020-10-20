#ifndef HOLBERTON_H
#define HOLBERTON_H

/**
 * struct dog - my_dog structure saved in typedef.
 * @name: input variable.
 * @age: input variable.
 * @owner: input variable
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
