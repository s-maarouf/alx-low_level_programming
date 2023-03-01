#include "main.h"

/**
 * *_strncpy - is a function that copies the src value to dest
 *
 * @dest: is the destionation parameter
 * @src: is the source parameter to be copied
 * @n: is the number of characters to be copied
 *
 * Return: dest value
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
