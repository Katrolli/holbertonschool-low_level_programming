#include "search_algos.h"
/**
 * linear_search - function that searches an array
 * @array: element to search
 * @size: size of array
 * @value: value to find in array
 * Return: return the index if element found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
