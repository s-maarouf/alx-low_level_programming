#include "variadic_functions.h"

/**
 * sum_them_all - is a function that returns the sum of all its parameters
 *
 * @n: the number of args to input
 *
 * Return: the sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	int tot = 0;

	va_start(ap, n);

	if (n == 0)
	{
		return (0);
	}

	while (i < n)
	{
		tot = tot + va_arg(ap, int);
		i++;
	}
	va_end(ap);

	return (tot);
}
