#include "lists.h"

/**
 * sum_listint - is a function that returns the sum of all the data of a list
 *
 * @head: pointer to the first node of the list
 *
 * Return: sum of all (n)
 */
int sum_listint(listint_t *head)
{
	int s = 0;

	while (head != NULL)
	{
		s = s + head->n;
		head = head->next;
	}
	return (s);
}
