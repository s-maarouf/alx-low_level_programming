#include "main.h"

/**
 * *_strdup - is a function that returns a pointer to a newly allocated space
 *	in memory, which contains a copy of the string given as a parameter.
 *
 *		Returns NULL if str = NULL
 *
 * @str: is the input string
 *
 * Return: a pointer to a new string which is a duplicate of the string @str.
 */

char *_strdup(char *str)
{
	int len, i;
	char *dup;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
	{
		len++;
	}

	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		dup[i] = str[i];
		i++;
	}
	return (dup);
}
