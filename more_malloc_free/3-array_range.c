#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - main function
 * @min: min elemnts of array
 * @max: max size of elements of array
 * Return: return the pointer
 */
int *array_range(int min,int max)
{
	int *ptr;
	int len;
	int i;

	len = max - min;
	if (min > max)
		return (NULL);
	ptr = malloc(len * sizeof(int) + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = min; i <= len; i++)
	{
		ptr[i] = min;
		min++;
	}
	ptr[i] = '\0';
	return (ptr);
}
