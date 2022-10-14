#include "main.h"
/**
 * _strspn - main func
 *
 * @s: is a parameter
 * @accept: is a parameter
 * Return: return
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, temp = 0, max = 0;

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
			temp++;
		}
		else
		{
			if (temp > max)
			{
				max = temp;
			}
			temp = 0;
		}
	}
	return (max);
}
