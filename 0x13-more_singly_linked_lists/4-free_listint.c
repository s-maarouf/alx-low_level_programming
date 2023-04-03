#include "lists.h"

/**
 * free_listint - frees a list
 *
 * @head: pointer to the first node of the list
 *
 * Return: nothing
*/
void free_listint(listint_t *head)
{
	listint_t *list;

	while ((list = head) != NULL)
	{
		head = head->next;
		free(list);
	}
}
