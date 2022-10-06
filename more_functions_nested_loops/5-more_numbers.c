#include "main.h"
#include <unistd.h>

/**
 * more_numbers - main func
 * Return: returns - if success
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar(j / 10 + '0');
			}
				_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}

}
