#include "main.h"
#include <unistd.h>

/**
 * print_triangle - main func
 * Return: returns - if success
 *@size: is a paramater
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			if (i + j != size && i + j < size)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');

	}
	if (size <= 0)
		_putchar('\n');
}
