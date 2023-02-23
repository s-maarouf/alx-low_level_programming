#include "main.h"

/**
* ft_write_number - print numbers from 1 to 100
*
* main - prints numbers that are multiples of 3 print Fizz
*	numbers that are multiples of 5 print Buzz
*	numbers that are multiples of 3 n 5 print FizzBuzz
*	each number and word to be separated by space
*
* @number: is the numbers
*
* Return: Always 0 (Success)
*/

void	ft_write_number(int number)
{
	if (number > 9)
		ft_write_number(number / 10);
	write(1, &"0123456789"[number % 10], 1);
}

int	main(void)
{
	int	number;

	number = 1;
	while (number <= 100)
	{
		if (number % 3 == 0 && number % 5 == 0)
			write(1, "FizzBuzz", 8);
		else if (number % 3 == 0)
			write(1, "Fizz", 4);
		else if (number % 5 == 0)
			write(1, "Buzz", 4);
		else
			ft_write_number(number);
		write(1, " ", 1);
		number++;
	}
	return (0);
}
