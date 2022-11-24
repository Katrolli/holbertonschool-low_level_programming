#include "hash_tables.h"
/**
 * hash_table_get - gets the value of key
 * @key: string used to get key
 * @ht: the hash table
 * Return: returns the value as a string
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *p;
	int flag = 0;

	if (ht == NULL)
		return;
    printf("{");
    for (i = 0; ht && i < ht->size; i++)
    {
	    p = ht->array[i];
	while (p)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", p->key, p->value);
	    p = p->next;
	    flag = 1;
	}
    }
    printf("}\n");
}
