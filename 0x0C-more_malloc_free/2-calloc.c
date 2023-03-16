#include "main.h"

/**
 * _memset - is a function that fills memory with a constant byte
 *
 * @s: input pointer that represents memory
 *	block to fill
 * @b: characters to fill
 * @n: number of bytes to be filled
 *
 * Return: A pointer to the filled memory area
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

/**
 * *_calloc - is a function that allocates memory for an array, using malloc.
 *
 *		-The _calloc function allocates memory for an array of nmemb
 *		elements of size bytes each and returns
 *		a pointer to the allocated memory.
 *		-The memory is set to zero
 *
 * @nmemb: is the size of the array
 * @size: is the size of each element
 *
 * Return: pointer with new allocated memory
 *		or NULL if it fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	_memset(p, 0, nmemb * size);

	return (p);
}
