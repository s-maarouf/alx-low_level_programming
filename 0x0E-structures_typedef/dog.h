#ifndef dog_h
#define dog_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct dog - a structure named dog
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * typedef dog_t - a typedef of struct dog
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif
