#include "main.h"
#include <unistd.h>

/**
 * print_numbers - main func
 * Return: returns - if success
 *@n: is a paramater
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	if (n >= 1000 && n < 10000)
	{
		_putchar(n / 1000 + '0');
		_putchar(n / 100 % 10 + '0');
		_putchar(n / 10 % 10 + '0');
	}
	else if (n >= 100 && n < 1000)
	{
		_putchar(n / 100 + '0');
		_putchar(n / 10 % 10 + '0');
	}
	else if (n >= 10 && n < 100)
	{
		_putchar(n / 10 + '0');
	}
	_putchar(n % 10 + '0');
}
