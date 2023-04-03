#include "lists.h"

/**
 * pop_listint - is a function that deletes the head node of a list
 *
 * @head: pointer to the first node
 *
 * Return: head node’s data (n) or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	int first;
	listint_t *temp, *next;

	if (*head == NULL)
		return (0);

	temp = *head;
	next = temp->next;
	first = temp->n;

	free(temp);
	*head = next;
	return (first);
}
