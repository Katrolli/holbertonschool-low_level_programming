#include "main.h"
/**
 * _strcat - main func
 *
 * @dest: is a parameter
 * @src: is a parameter
 * Return: return dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
