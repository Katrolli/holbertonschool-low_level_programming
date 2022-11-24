#include "hash_tables.h"
/**
 * key_index - implementation of the djb2 algorithm
 * @key: string used to get key
 * @size: size of array
 * Return: index of key/value
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *new;

	if (key == NULL || ht == NULL)
		return (0);
	 idx = key_index((const unsigned char *)key, ht->size);
    new = malloc(sizeof(hash_node_t));
    if (new == NULL)
        return 0;
    new->key = strdup(key);
    new->value = strdup(value);
    new->next = ht->array[idx];
    ht->array[idx] = new;
    return (1);
}
