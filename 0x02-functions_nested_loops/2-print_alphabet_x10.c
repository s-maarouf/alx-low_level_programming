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
	for (l <= 9; l++;)
	{
		for (x <= 'z'; x++;)
			putchar(x);
		putchar('\n');
	}
}
