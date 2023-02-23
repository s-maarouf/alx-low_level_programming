#include"main.h"

/**
 * print_diagonal - print a straight line
 *
 * @n: is the number of times the _ character
 *     should be printed
*/

void print_diagonal(int n)
{
	int lnChr, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (lnChr = 1; lnChr <= n; lnChr++)
		{
			for (space = 1; space <= lnChr; space++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
