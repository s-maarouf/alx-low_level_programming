#include "main.h"

/**
 * print_alphabet - utilizes on the _putchar function to print
 *                 the alphabet a - z
*/

void print_alphabet(void)
{
	int x;

	x = 'a';
	while ( x <= 'z' )
	{
		_putchar(x);
		x++;
	}
	_putchar(\n);
	return (0);
}
