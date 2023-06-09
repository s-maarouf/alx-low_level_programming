#include "hash_tables.h"

/**
 * hash_table_delete - is a function that deletes a hash table
 *
 * @ht: is the hash table to delete
 *
 * Return: nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current, *temp;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			temp = current->next;
			free(temp->key);
			free(temp->value);
			free(temp);
			current = temp;
		}
	}

	free(ht->array);
	free(ht);
}
