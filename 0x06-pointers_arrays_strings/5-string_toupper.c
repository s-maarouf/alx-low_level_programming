#include "main.h"

/**
 * *string_toupper - is a function that changes
 *	all lowercase letters of a string to uppercase.
 * @s: is the input parameter
 * Return: input value
 */

char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] -= 32;
		}
		i++;
	}
	return (s);
}
