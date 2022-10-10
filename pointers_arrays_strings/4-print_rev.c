#include "main.h"
/**
 * print_rev - main func
 *
 * @s: is a parameter
 * Return: return 1
 */
void print_rev(char *s)
{
	int i;

	for (i = _strlen(s) - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
