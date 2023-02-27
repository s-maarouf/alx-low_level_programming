/**
 * swap_int - is a function that swaps the values of two integers.
 *
 * @a: is the first int
 * @b: is the second int
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
