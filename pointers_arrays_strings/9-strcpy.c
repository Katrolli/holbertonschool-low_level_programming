#include "main.h"
/**
 * _strcpy - main func
 *
 * @dest: is a parameter
 * @src: is a parameter
 * Return: return 1
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
