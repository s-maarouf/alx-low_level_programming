#include "hash_tables.h"

/**
 * hash_table_print - is a function that prints a hash table
 *
 * @ht: is the hash table to print
 *
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int printed = 0;
	hash_node_t *current;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			if (printed > 0)
				printf(", ");

		printf("'%s': '%s'", current->key, current->value);
		printed++;

		current = current->next;
		}
	}
	printf("}\n");
}
