#include "main.h"

/**
 * print_alphabet_x10 - function that will print the alphabet 10 times
 *
*/

void print_alphabet_x10(void)
{
	int l, x;

	l = 0;
	x = 'a';
	while (l <= 9)
	{
		for (x <= 'z'; x++;)
			_putchar(x);
			_putchar('\n');
		l++;
	}
}
