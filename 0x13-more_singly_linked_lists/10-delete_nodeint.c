#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev, *node_to_delete;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
		return (1);
	}

	prev = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (prev->next == NULL)
			return (-1);
		prev = prev->next;
	}

	node_to_delete = prev->next;
	if (node_to_delete == NULL)
		return (-1);

	prev->next = node_to_delete->next;
	free(node_to_delete);

	return (1);
}

