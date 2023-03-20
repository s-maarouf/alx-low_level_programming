#include "dog.h"

/**
 * init_dog - is a struct initialiser
 *
 * @d: input pointer
 * @name: input name of dog
 * @age: input age of dog
 * @owner: input owner of dog
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age  = age;
		(*d).owner = owner;
	}
}
