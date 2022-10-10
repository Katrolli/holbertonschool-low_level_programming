#include "main.h"
/**
 * _strlen - main func
 *
 * @s: is a parameter
 * Return: return 1
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
