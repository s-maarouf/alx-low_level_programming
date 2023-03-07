#include "main.h"

/**
 * *_memcpy - is a function that copies memory area.
 *
 * @dest: is the destination of the copied memory value
 * @src: is the source of the copied memory value
 * @n: is the number of bytes to be copied
 *
 * Return: a pointer to @dest value
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
