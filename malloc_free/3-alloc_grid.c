#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - main function
 * @width: first string to be concatenaded to the 2nd one
 * @height: second string
 * Return: pointer to an array
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
		ptr[i] = malloc(sizeof(int) * width);
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
