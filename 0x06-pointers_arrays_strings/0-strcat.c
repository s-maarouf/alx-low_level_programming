#include "main.h"

/**
 * *_strcat - is a function that concatenates two strings.
 *
 * @dest: is the parameter to be appended
 * @src: is the parameter to append
 *
 * Return: dest string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
