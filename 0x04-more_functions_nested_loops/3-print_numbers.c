#include "main.h"

/**
 * print_numbers - print 0 - 9
 *             only using _putchar twice
 *
 * Return: Always 0 (Success)
*/

void print_numbers(void)
{
	int x;

	x = '0';
	while (x <= '9')
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
