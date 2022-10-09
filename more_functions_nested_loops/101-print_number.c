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
		n = -n;
	}
	if (n / 10)
	{
		print_number(n / 10);
	}
		_putchar(n % 10 + '0');
}
