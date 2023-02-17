#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all aplhabet letters
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i;

	i = 'a';
	while (i <= 'z')
	{
	putchar(i);
	i++;
	}
	putchar('\n');
	return (0);
}
