#include "hash_tables.h"
/**
 * hash_table_create - main function
 * @size: size of new array
 * Return: return new array created
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *arr;

	arr = malloc(sizeof(hash_table_t));
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	arr->size = size;
	arr->array = malloc(sizeof(hash_node_t) * has_table_t);
	if (arr->array == NULL)
		return (NULL);
	return (arr);
}
