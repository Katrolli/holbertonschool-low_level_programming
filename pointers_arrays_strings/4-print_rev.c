#include "main.h"
/**
 * print_rev - main func
 *
 * @s: is a parameter
 * Return: return 1
 */
void print_rev(char *s)
{
	int i = 0;
	int length;
	int j;

	while (s[i] != '\0')
		i++;
	length = i;

	for (j = length - 1; j >= 0; j--)
		_putchar(s[j]);
	_putchar('\n');
}
