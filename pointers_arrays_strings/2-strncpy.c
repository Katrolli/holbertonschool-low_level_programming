#include "main.h"
/**
 * _strncpy - main func
 *
 * @dest: is a parameter
 * @src: is a parameter
 * @n: is a parameter
 * Return: return 1
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
