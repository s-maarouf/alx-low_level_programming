#include "main.h"

/**
 * print_rev - is a function that prints a string,
 * in reverse, followed by a new line.
 *
 * @s: is the function's parameter
 *
 */

void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	while (i > 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
