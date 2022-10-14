#include "main.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_diagsums - main func
 *
 *@a: is a parameter
 *@size: is a paramater
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int sumR = 0;
	int sumL = 0;

	for (i = 0; i < size; i++)
	{
		sumR = sumR + *(a + i + i * size);
		j = i + 1;
		sumL = sumL + *(a + size * j - j);
	}
	printf("%d, %d\n", sumR, sumL);
}
