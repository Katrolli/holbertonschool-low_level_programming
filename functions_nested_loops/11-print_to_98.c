#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * print_to_98 - main func
 * Return: returns 0 if sucess
 * @n: is a paramater
 */

void print_to_98(int n)
{
	int j;

	for (j = n; j >= 98; j--)
	{
		printf("%d", j);
		if (j != 98)
		{
			printf(", ");
		}
	}
	for (j = n; j <= 98; j++)
	{
		printf("%d", j);
		if (j != 98)
		{
			printf(", ");
		}
	}
	printf("\n");
}
