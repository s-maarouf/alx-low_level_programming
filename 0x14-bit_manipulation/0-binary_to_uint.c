#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 *
 * @b: is pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if @b is NULL or there is
 *		one or more chars other than 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int len = 0;
	int power;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}
	for (power = 1, res = 0, len--; len >= 0; len--, power *= 2)
	{
		if (b[len] == '1')
			res += power;
	}

	return (res);
}
