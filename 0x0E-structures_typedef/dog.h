#ifndef dog_h
#define dog_h

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
 * dog_t - typedef of struct dog
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
