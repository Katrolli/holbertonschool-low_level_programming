#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - main func
 *
 * @s: is a parameter
 * @accept: is a parameter
 * Return: return
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		int found = 0;

		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		if (found == 1)
		{
			return (&s[i]);
		}
	}
	return (NULL);
}
