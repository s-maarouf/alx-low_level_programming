#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all aplhabet letters in lowercase, and then in uppercase, followed by a new line.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i;
	int j;

	i = 'a';
	j = 'A';
	while (i <= 'z')
	{
	putchar(i);
	i++;
	}
	while (j <= 'Z')
        {
        putchar(j);
        j++;
        }	
	putchar('\n');
	return (0);
}
