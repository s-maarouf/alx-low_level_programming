#include "main.h"

/**
 * *_strncat - is a function that appends the src string to the dest string
 * and it will use at most n bytes from src
 * @dest: is the parameter to be appended
 * @src: is the parameter to append
 * @n: is the number of characters to be copied
 *
 * Return: dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	return (dest);
}
