#include "main.h"

/**
 * _strstr - a function that locates a substring
 *
 * @haystack: input string to search for matching
 *            substrings
 * @needle: subtring to search for
 *
 * Return: a pointer to the beginning
 *         of the located substring or
 *         NULL if substring is not found
*/

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (needle[j] == '\0')
		return (haystack);
	while (haystack[i] != '\0')
	{
		while (haystack[i + j] == needle[j] && haystack[i + j] != '\0')
			j++;
		if (needle[j] == '\0')
			return (haystack + i);
		i++;
		j = 0;
	}
return ('\0');
}
