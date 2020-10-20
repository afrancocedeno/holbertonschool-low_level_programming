#ifndef HOLBERTON_H
#define HOLBERTON_H

/**
 * struct dog - struct.
 * @name: input variable.
 * @age: input variable.
 * @owner: input variable
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
