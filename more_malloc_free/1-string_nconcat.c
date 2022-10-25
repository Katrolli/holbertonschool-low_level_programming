#include <stdio.h>
#include "main.h"
#include <stdlib.h>

unsigned int str_len(char *str);
/**
 * string_nconcat - main function
 * @s1: first string to be concatenaded to the 2nd one
 * @s2: second string
 * @n: is a paramater of length
 * Return: pointer to an array
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i = 0;
	unsigned int len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= str_len(s2))
		len = str_len(s1) + str_len(s2);
	else
		len = str_len(s1) + n;
	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);
	while (*s1 != '\0')
	{
		ptr[i] = *s1;
		s1++;
		i++;
	}
	while (*s2 != '\0' && n != 0)
	{
		ptr[i] = *s2;
		s2++;
		i++;
		n--;
	}
	ptr[i] = '\0';
	return (ptr);
}

/**
 * str_len - main func
 * @str: is paramater
 * Return: length
 */

unsigned int str_len(char *str)
{
	unsigned int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}
