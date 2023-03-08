#include "main.h"

/**
 * is_palindrome - checks whether a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	char *start = s;
	char *end = s;

	while (*end != '\0')
		end++;

	while (start < end)
	{
		while (*start != '\0' &&
		       !((*start >= 'a' && *start <= 'z') ||
		       (*start >= 'A' && *start <= 'Z') ||
		       (*start >= '0' && *start <= '9')))
			start++;

		while (end > start &&
		       !((*end >= 'a' && *end <= 'z') ||
		       (*end >= 'A' && *end <= 'Z') ||
		       (*end >= '0' && *end <= '9')))
			end--;

		if (tolower(*start) != tolower(*end))
			return (0);

		start++;
		end--;
	}

	return (1);
}
