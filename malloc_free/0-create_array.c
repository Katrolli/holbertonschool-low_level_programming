#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - main function
 * @size: is a paramater of the size of the array
 * @c: paramater that is printed from the function
 * Return: pointer to an array
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	ptr = malloc(size);
	if (ptr == NULL)
		return (NULL);
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
