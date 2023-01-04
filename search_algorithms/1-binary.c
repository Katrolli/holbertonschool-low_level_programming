#include "search_algos.h"
/**
 * binary_search - function that searches array
 * @array: array to be searched
 * @size: size of array
 * @value: value to be found
 * Return: returns the position of element
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, mid, i;

	if (array == NULL)
		return (-1);
	left = 0;
	right = size - 1;
	mid = (left + right) / 2;
	while (left <= right)
	{
		i = left;
		printf("Searching in array: ");
		while (i <= right)
		{
			if (i != right)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
			i++;
		}
		if (array[mid] < value)
		{
			left = mid + 1;
		}
		else if (array[mid] == value)
		{
			return (mid);
		}
		else
			right = mid - 1;
		mid = (left + right) / 2;
	}
	return (-1);
}
