#include "hash_tables.h"

/**
 * hash_table_get - is a function that retrieves a value associated with a key
 *
 * @ht: is the hash table to look into
 * @key: is the key to look for
 *
 * Return: value of key, or NULL if not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = hash_djb2((const unsigned char *)key) % ht->size;

	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);

		current = current->next;
	}

	return (NULL);
}
