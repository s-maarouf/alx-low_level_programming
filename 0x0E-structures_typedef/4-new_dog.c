#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog, or NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_copy;
	char *owner_copy;
	int name_len;
	int owner_len;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	name_len = strlen(name) + 1;
	name_copy = malloc(sizeof(char) * name_len);
	if (name_copy == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	owner_len = strlen(owner) + 1;
	owner_copy = malloc(sizeof(char) * owner_len);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(new_dog);
		return (NULL);
	}

	strncpy(name_copy, name, name_len);
	strncpy(owner_copy, owner, owner_len);

	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;

	return (new_dog);
}
