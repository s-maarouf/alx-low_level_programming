#include "hash_tables.h"

/**
 * key_index - is a function that gives you the index of a key.
 *
 * @key: is the key to index
 * @size: is the size of the array of the hash table
 *
 * Return: idex of key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = (hash_djb2(key) % size);
	return (index);
}
