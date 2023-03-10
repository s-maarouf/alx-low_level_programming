#include "main.h"

/**
 * main - is a program that prints the number of arguments passed into it.
 *
 * @ac: arguments count
 * @av: arguments input
 *
 * Return: 0
 */

int main(int ac, char __attribute__((unused)) **av)
{
	int i, m;

	i = 0;
	while (i < ac)
	{
		m = i;
		i++;
	}
	printf("%d\n", m);
	return (0);
}
