#include "main.h"

/**
 * reverse_array - is a function that reverses the content of an array
 *	of integers.
 * @a: is the array input
 * @n: is the number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
