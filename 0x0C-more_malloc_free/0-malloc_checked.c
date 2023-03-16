#include "main.h"

/**
 * *malloc_checked - is a function that allocates memory using malloc.
 *
 *		-if malloc fails, the malloc_checked function should cause
 *		normal process termination with a status value of 98
 *
 * @b: is the number of bytes to locate
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (i);
}
