#include "main.h"
#include <unistd.h>

/**
 * times_table - main func
 * Return: returns 0 if sucess
 */

void times_table(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		for (j = 0; j < 10; j++)
		{
			k = i * j;
			if (k < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k % 10 + '0');
			}
			else if (k >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
