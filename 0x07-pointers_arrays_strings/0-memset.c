#include "main.h"

/**
 * *_memset - is a function that fills memory with a constant byte.
 *
 * @s: is memory area pointed
 * @b: is the character to fill s
 * @n: is number of bytes to be filled
 *
 * Return: A pointer to the filled memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
