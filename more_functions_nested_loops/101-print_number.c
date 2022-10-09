#include "main.h"
#include <unistd.h>

/**
 * print_number - main func
 * Return: returns - if success
 *@n: is a paramater
 */
void print_number(int n)
{
	unsigned int m = n;

	if (n < 0)
	{
		_putchar('-');
		m = -m;
	}
	if (n / 10)
	{
		print_number(m / 10);
	}
		_putchar(m % 10 + '0');
}
