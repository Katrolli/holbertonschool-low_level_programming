#include "hash_tables.h"
/**
 * hash_table_get - gets the value of key
 * @key: string used to get key
 * @ht: the hash table
 * Return: returns the value as a string
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int idx;

	if (key == NULL || ht == NULL)
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	if (ht->array[idx] == NULL)
		return (NULL);
	return (ht->array[idx]->value);
}
