#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - main function
 * @s1: first string to be concatenaded to the 2nd one
 * @s2: second string
 * Return: pointer to an array
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int i = 0;
	int length1 = 0;
	int length2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[length1] != '\0')
	{
		length1++;
	}
	while (s2[length2] != '\0')
	{
		length2++;
	}
	ptr = malloc(sizeof(char) * length1 + length2 + 1);
	if (ptr == NULL)
		return (NULL);
	while (*s1 != '\0')
	{
		ptr[i] = *s1;
		s1++;
		i++;
	}
	while (*s2 != '\0')
	{
		ptr[i] = *s2;
		s2++;
		i++;
	}
	return (ptr);
}
