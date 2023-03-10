#include "main.h"

/**
 * main - is a program that multiplies two numbers.
 *	Your program should print the result of the multiplication,
 *	followed by a new line
 *
 *	You can assume that the two numbers and result of the multiplication
 *	can be stored in an integer
 *
 *	If the program does not receive two arguments, your program should
 *	print Error, followed by a new line, and return 1
 *
 * @ac: arguments count
 * @av: arguments input
 *
 * Return: 0
 */

int main(int ac, char **av)
{
	int i;

	if (ac != 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		i = (atoi(av[1]) * atoi(av[2]));
		printf("%d\n", i);
	}
	return (0);
}
