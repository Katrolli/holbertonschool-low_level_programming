#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - main function
 * @str: argument of the string that needs to be copied
 * Return: pointer to an array
 */

char *_strdup(char *str)
{
	char *ptr;
	unsigned int i = 0;
	int length = 0;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
	{
		length++;
	}
	ptr = malloc(sizeof(str) * length + 1);
	if (ptr == NULL)
		return (NULL);
	while ((ptr[i] = str[i] != '\0'))
	{
		ptr[i] = str[i];
		i++;
	}
	return (ptr);
	free(ptr);
}
