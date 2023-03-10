#include "main.h"

/**
 * main - is a program that adds positive numbers.
 *
 * 	Print the result, followed by a new line
 *
 * 	If no number is passed to the program, print 0, followed by a new line
 *
 * 	If one of the number contains symbols that are not digits,
 * 	print Error, followed by a new line, and return 1
 *
 * @ac: arguments count
 * @av: arguments input
 *
 * Return: 0
 */

int main(int ac, char **av)
{
	int num, digit, sum = 0;

	for (num = 1; num < ac; num++)
	{
		for (digit = 0; av[num][digit]; digit++)
		{
			if (av[num][digit] < '0' || av[num][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(av[num]);
	}

	printf("%d\n", sum);

	return (0);
}
