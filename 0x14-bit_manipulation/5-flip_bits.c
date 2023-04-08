#include "main.h"

/**
 * flip_bits - a function that returns the number of bits needed to flip
 *		to convert one number to another number
 * @n: First number
 * @m: Second number to convert to
 *
 * Return: The number of bits that was needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int counter = 0;

	while (diff)
	{
		counter++;
		diff &= (diff - 1);
	}

	return (counter);
}
