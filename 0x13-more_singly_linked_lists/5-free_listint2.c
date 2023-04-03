#include "lists.h"

/**
 * free_listint2 - is a function that frees a list and sets @head to NULL
 *
 * @head: pointer to the first node
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *node, *temp;

	if (head != NULL)
	{
		node = *head;

		while ((temp = node) != NULL)
		{
			node = node->next;
			free(temp);
		}
		*head = NULL;
	}
}
