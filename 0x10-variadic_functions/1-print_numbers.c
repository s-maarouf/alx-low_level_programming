#include "variadic_functions.h"

/**
 * print_numbers - is a function that prints numbers, followed by a new line.
 *
 * @separator: is the string to be printed between numbers
 * @n: is the number of args to input
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list numbers;

	va_start(numbers, n);

	while (i < n)
	{
		if (!separator)
			printf("%d", va_arg(numbers, int));
		else if (separator && i == 0)
			printf("%d", va_arg(numbers, int));
		else
			printf("%d%s", va_arg(numbers, int), separator);
		i++;
	}
	va_end(numbers);
	printf("\n");
}
