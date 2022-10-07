#include "main.h"
#include <unistd.h>

/**
 * print_times_table - main func
 * Return: returns 0 if sucess
 * @n: is a paramater
 */
void print_times_table(int n)
{
	int i, j, z;
	if (n == 0)
		_putchar('0');

	else if (n <= 15 && n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 0; j <= n; j++)
			{
				z = i * j;
				if (z >= 100 && z <= 225)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(z / 100 + '0');
					_putchar(z / 10 % 10 + '0');
					_putchar(z % 10 + '0');
				}
				else if (z < 10 && j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(z + '0');
				}
				else if (z >= 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(z / 10 + '0');
					_putchar(z % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
