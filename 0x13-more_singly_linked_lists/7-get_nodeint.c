#include "lists.h"

/**
 * get_nodeint_at_index - is a function eturns the nth node of a list
 *
 * @head: pointer to the first node
 * @index: number of node to access
 *
 * Return: nth node or NULL if node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}
	return (head);
}
