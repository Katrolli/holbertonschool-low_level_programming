#include "main.h"
#include <unistd.h>

/**
 * print_most_numbers - main func
 * Return: returns - if success
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	if (i != 2 && i != 4)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
