#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - main function
 * @nmemb: number of elements to add memory
 * @size: size of elements
 * Return: return the pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = calloc(size, sizeof(nmemb));
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
