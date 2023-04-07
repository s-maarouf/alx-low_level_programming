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
	int  i = 0;

	while (b[len] != '\0')
	{
		len++;
	}
	if (len == '\0')
		return (0);

	else
		for (i = 0; i < len; i++)
		{
			if (b[i] == '1')
			{
				res += 1 << (len - i - 1);
			}
			else if (b[i] != '0')
			{
				return (0);
			}
		}
	return (res);
}
