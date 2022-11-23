#include "hash_tables.h"
/**
 * key_index - implementation of the djb2 algorithm
 * @key: string used to get key
 * @size: size of array
 * Return: index of key/value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL || size == 0)
		return (0);
	return (hash_djb2(key) % size);
}
