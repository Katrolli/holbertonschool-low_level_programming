#include "main.h"
/**
 * _memset - main func
 *
 * @s: is a parameter
 * @b: is a parameter
 * @n: is a paramete
 * Return: return
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;
	unsigned int i;

	for (i = 0; i != n; i++)
	{
		p[i] = b;
	}
	return (s);
}
