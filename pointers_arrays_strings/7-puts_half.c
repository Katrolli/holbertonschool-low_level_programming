#include "main.h"
/**
 * puts_half - main func
 *
 * @str: is a parameter
 * Return: return 1
 */
void puts_half(char *str)
{
	int i = 0;
	int length;

	while (str[i] != '\0')
		i++;
	length = i;
	for (i = 0; i < length; i++)
	{
		if (i > length / 2 && i % 2 == 0)
			_putchar(str[i]);
		else if (i >= length / 2 && i % 2 != 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
