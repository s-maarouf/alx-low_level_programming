#include "lists.h"

/**
 * add_dnodeint - is a function that adds a new node at the beginning of a list
 *
 * @head: head of list
 * @n: value of node
 *
 * Return: address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;

	if (*head != NULL)
	{
		(*head)->prev = new_node;
		new_node->next = *head;
	}

	*head = new_node;

	return (new_node);
}
