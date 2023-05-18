#include "lists.h"

/**
 * free_dlistint - is function that frees a list
 *
 * @head: head of list
 *
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
