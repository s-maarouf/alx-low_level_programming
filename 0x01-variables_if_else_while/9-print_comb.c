#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print comb 0, 1, - 9
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int digit = '0';

	while (digit <= '9')
	{
		putchar(digit);

		if (digit != '9')
		{
			putchar(',');
			putchar(' ');
		}

		digit++;
	}
	putchar('\n');

	return (0);
}
