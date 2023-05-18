#include "lists.h"

/**
 * dlistint_len - is a function that returns the number of element
 *		in a linked list
 *
 * @h: head of the list
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
