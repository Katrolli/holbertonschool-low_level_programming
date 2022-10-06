#include "main.h"
#include <unistd.h>

/**
 * print_diagonal - main func
 * Return: returns - if success
 *@n: is a paramater
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
			_putchar(' ');
		_putchar('\\');
		if (i == n - 1)
			continue;
		_putchar('\n');
	}
	_putchar('\n');
}
