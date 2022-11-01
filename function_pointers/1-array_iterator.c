#include <stdio.h>
#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - main function
 * @array: array of elements to print
 * @size: size of array
 * @action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action) (int))
{
	size_t i;

	if (action && array)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
