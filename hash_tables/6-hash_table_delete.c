#include "hash_tables.h"
/**
 * hash_table_delete - print the key/value pair
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp, *current;
	unsigned int i = 0;

	if (ht == NULL)
		return;
	for (i = 0; ht && i < ht->array[i]; i++)
	{
		tmp = ht->array[i];
		if (tmp)
		{
			current = ht->array[i];
			while (current)
			{
				tmp = current->next;
				free(current->key);
				free(current->value);
				free(current);
				current = tmp;
			}
		}
	}
	free(ht->array);
	free(ht);
}
