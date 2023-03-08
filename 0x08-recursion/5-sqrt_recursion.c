#include "main.h"

/**
 * _sqrt_helper - recursive helper function to compute square root of a number
 * @n: the number to compute the square root of
 * @low: the lowest possible integer square root
 * @high: the highest possible integer square root
 *
 * Return: the integer square root of n, or -1 if n does not have a natural
 *         square root
 */
int _sqrt_helper(int n, int low, int high)
{
	int mid;
	int square;

	mid = low + (high - low) / 2;
	square = mid * mid;
	if (low > high)
		return (-1);
	if (square == n)
		return (mid);
	else if (square > n)
		return (_sqrt_helper(n, low, mid - 1));
	else
		return (_sqrt_helper(n, mid + 1, high));
}

/**
 * _sqrt_recursion - compute the natural square root of
 *			a number using recursion
 * @n: the number to compute the square root of
 *
 * Return: the integer square root of n, or -1 if n does not have a natural
 *         square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(n, 0, n));
}
