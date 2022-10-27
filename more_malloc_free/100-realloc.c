#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - main function
 * @min: min elemnts of array
 * @max: max size of elements of array
 * Return: return the pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	
	if (new_size == old_size)
		return ptr;
	if ( new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return NULL;
	}
	if(ptr == NULL)
		new_ptr = malloc(new_size);
	else
		new_ptr = malloc(old_size + new_size);
	free(ptr);
	return new_ptr;
}
