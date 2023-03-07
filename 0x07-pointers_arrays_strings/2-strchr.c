#include "main.h"

/**
 * *_strchr - is a function that locates a character in a string.
 *
 * @s: is the string array input
 * @c: is character to be located from @s
 *
 * Return: first occurence of charatcer or null if not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (c == *s)
		{
			return (s);
		}
		s++;
	}
	if (c == *s)
	{
		return (s);
	}
	return ('\0');
}
