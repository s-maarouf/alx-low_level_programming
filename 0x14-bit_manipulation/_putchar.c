#include "main.h"

/**
 * _putchar - is a function that prints the input chars
 *
 * @c: is the char to input
 *
 * Return: char printed
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
