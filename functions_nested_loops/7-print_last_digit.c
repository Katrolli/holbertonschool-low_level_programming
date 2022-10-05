#include "main.h"
#include <unistd.h>

/**
 * print_last_digit - main func
 * Return: returns 0 if sucess
 * @i: paramater for the function
 */
int print_last_digit(int i)
{
	int j = i % 10;

	if (j < 0)
	{
		j = j * -1;
	}
	_putchar (j + '0');
	return (j);
}
