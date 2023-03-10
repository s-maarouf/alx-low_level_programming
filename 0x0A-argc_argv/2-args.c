#include "main.h"

/**
 * main - is a program that prints all arguments it receives.
 *		All arguments should be printed, including the first one
 *		Only print one argument per line, ending with a new line
 *
 * @ac: is the arguments count
 * @av: is the arguments input
 *
 * Return: 0
 */

int main(int ac, char **av)
{
	int i;

	i = 0;
	while (i < ac)
	{
		printf("%s\n", av[i]);
		i++;
	}
	return (0);
}
