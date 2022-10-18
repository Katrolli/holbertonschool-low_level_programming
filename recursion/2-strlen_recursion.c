#include "main.h"

/**
 * _strlen_recursion - main function
 * @s: is a paramater
 * Return: void
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (_strlen_recursion(s) + 1);
}
