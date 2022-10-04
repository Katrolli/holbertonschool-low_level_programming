#include "main.h"
#include <unistd.h>

/**
 * print_sign - main func
 * Return: returns 0 if sucess
 * @n: paramater for the function
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);

}
