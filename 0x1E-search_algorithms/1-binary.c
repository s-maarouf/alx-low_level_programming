#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers using
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	int left, i;
	int right = size - 1;

	if (array == NULL)
	{
		return (-1);
	}

	left = 0;
	i = left;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;

		printf("Searching in array: ");
		while (i <= right)
		{
			printf("%d", array[i]);
			if (i < right)
			{
				printf(", ");
			}
			i++;
		}
		printf("\n");
		if (array[mid] == value)
		{
			return (mid);
		}

		if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	return (-1);
}
