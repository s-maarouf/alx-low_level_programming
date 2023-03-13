#include "main.h"

/**
 * *create_array - is a function that creates an array of chars
 *		and initializes it with a specific char.
 *
 *		Returns NULL if size = 0
 *
 * @size: is the size of the array
 * @c: is the input character
 *
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *x;
	unsigned int i;

	i = 0;
	if (size == 0)
	{
		return (NULL);
	}
	x = malloc(sizeof(char) * size);
	while (i < size)
	{
		*(x + i) = c;
		i++;
	}
	return (x);
}

