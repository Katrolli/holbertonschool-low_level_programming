#include "main.h"
#include <unistd.h>

/**
 * print_line - main func
 * Return: returns - if success
 *@n: is a paramater
 */
void print_line(int n)
{
	int print;

	for (print = 0; print < n; print++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
