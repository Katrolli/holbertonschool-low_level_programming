#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - main function
 * @b: first string to be concatenaded to the 2nd one
 * Return: return the pointer
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
