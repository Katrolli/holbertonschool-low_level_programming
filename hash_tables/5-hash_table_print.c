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

    printf("{");
    for (i = 0; ht && i < ht->size; i++)
    {
	    p = ht->array[i];
	while (p)
	{
		printf("'%s': '%s'", p->key, p->value);
	    if (i == ht->size - 1)
		    break;
	    if (strcmp(p->value, "Obelix") != 0)
		    printf(", ");
	    p = p->next;
	}
    }
    printf("}\n");
}
