#include "main.h"

/**
 * main - prints the minimum number of coins to make
 *	change for an amount of money.
 *
 * @ac: number of command line arguments
 * @av: array containing the command line arguments
 *
 * Return: 0 on success, 1 on error
 */

int main(int ac, char **av)
{
	int cents, num_coins = 0;
	int coin_values[] = {25, 10, 5, 2, 1};
	int num_coin_values = sizeof(coin_values) / sizeof(coin_values[0]);
	int i = 0;

	if (ac != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(av[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	while (i < num_coin_values)
	{
		while (cents >= coin_values[i])
		{
			cents -= coin_values[i];
			num_coins++;
		}
		i++;
	}

	printf("%d\n", num_coins);

	return (0);
}
