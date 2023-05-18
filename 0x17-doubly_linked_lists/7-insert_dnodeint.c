#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at
 *		a given position
 *
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *current = *h;
	unsigned int i = 0;

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *h;
		*h = new_node;
	}
	else
	{
		while (i < idx - 1)
		{
			current = current->next;
			i++;
		}

	new_node->next = current->next;
	new_node->prev = current;
	current->next->prev = new_node;
	current->next = new_node;
	}

	return (new_node);
}
