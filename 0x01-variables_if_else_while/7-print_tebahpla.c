#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all aplhabet letters in reverse
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i;

	i = 'z';
	while (i >= 'a')
	{
	putchar(i);
	i--;
	}
	putchar('\n');
	return (0);
}
