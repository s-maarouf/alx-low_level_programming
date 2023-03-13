#include "main.h"

/**
 * *str_concat - is a function that concatenates two strings.
 *
 *		-If NULL is passed, treat it as an empty string.
 *		-Returns NULL on failure.
 *
 * @s1: is first input string
 * @s2: is the second input string
 *
 * Return: pointer that points to a newly allocated space in memory
 *		which contains the contents of s1,
 *		followed by the contents of s2, and null terminated.
 */

char *str_concat(char *s1, char *s2)
{
	char *res;
	int i = 0, j = 0, l1 = 0, l2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[l1] != '\0')
		l1++;

	while (s2[l2] != '\0')
		l2++;

	res = malloc(sizeof(char) * (l1 + l2 + 1));

	if (res == NULL)
		return (NULL);

	if (s1)
	{	
		while (i < l1)
		{
			res[i] = s1[i];
			i++;
		}
	}

	if (s2)
	{

		while (i < (l1 + l2))
		{
			res[i] = s2[j];
			i++;
			j++;
		}
	}
	return (res);
}
