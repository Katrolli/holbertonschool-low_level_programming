#include "main.h"
/**
 * _strcmp - main func
 *
 * @s1: is a parameter
 * @s2: is a parameter
 * Return: return 1
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		else if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
