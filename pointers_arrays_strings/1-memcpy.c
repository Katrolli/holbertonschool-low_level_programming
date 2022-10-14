#include "main.h"
/**
 * _memcpy - main func
 *
 * @src: is a parameter
 * @dest: is a parameter
 * @n: is a paramete
 * Return: return
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
