#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _realloc - main function
 * @old_size: size of old array
 * @new_size: size of new array
 * @ptr: is a paramater that  points to old array
 * Return: returns new pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		new_ptr = malloc(new_size);
	else
		new_ptr = malloc(old_size + new_size - 30);
	free(ptr);
	return (new_ptr);
}
