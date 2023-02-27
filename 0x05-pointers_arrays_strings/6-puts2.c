#include "main.h"

/**
 * puts2 - is a function that prints every other
 *	character of a string, starting with the first character,
 *	followed by a new line.
 * @str: is the input parameter
 */

void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}

