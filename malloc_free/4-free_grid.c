#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - main function
 * @grid: first string to be concatenaded to the 2nd one
 * @height: second string
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
