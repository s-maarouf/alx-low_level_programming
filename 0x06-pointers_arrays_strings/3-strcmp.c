#include "main.h"

/**
 * _strcmp - is a function that compares two strings
 * @s1: is the parameter input to be compared
 * @s2: is the parameter input to be compared
 *
 * Return: an integer indicating the result of the comparison
 *		0 if equal
 *		a negative value if s1 is less than s2
 *		a positive value if s1 is greater than s2
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
