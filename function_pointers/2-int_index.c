#include <stdio.h>
#include "function_pointers.h"
#include <stddef.h>
/**
 * int_index - main function
 * @array: array of elements to print
 * @size: size of array
 * @cmp: pointer to function
 * Return: returns index of element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if ((*cmp)(array[i]) == 1)
				return (i);
		}
	}
	return (-1);
}
