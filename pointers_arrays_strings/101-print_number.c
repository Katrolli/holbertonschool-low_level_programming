#include "main.h"
/**
 * print_number - main func
 *
 * @n: is a parameter
 */
void print_number(int n)
{
	unsigned int m;

	if (n < 0)
	{
		_putchar('-');
		m = -n;
	}
	else
	{
		m = n;
	}

	if (m / 10)
	{
		print_number(m / 10);
	}
	_putchar(m % 10 + '0');
}
