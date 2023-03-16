#include "main.h"

/**
 * *array_range - is a function that creates an array of integers.
 *
 *		-The array created should contain all the values from
 *		@min (included) to @max (included), ordered from @min to @max
 *
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: array pointer address, NULL if it fails
 */

int *array_range(int min, int max)
{
	int i, *array;

	if (min > max)
		return (NULL);

	array = malloc((max - min + 1) * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		array[i] = min;
		min++;
	}
	return (array);
}
