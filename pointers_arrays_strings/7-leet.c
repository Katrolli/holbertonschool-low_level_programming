#include "main.h"
#include <stdio.h>
/**
 * leet - main func
 *
 * @str: is a parameter
 * Return: return 1
 */
char *leet(char *str)
{
	int i, j;

	char letters[] = {'A', 'a', 'E', 'e', 'O', 'o', 'T', 't', 'L', 'l'};

	char numbers[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; numbers[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = numbers[j];
			}
		}
	}
	return (str);
}
