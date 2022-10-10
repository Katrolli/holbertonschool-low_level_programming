#include "main.h"
/**
 * _puts - main func
 *
 * @str: is a parameter
 * Return: return 1
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
