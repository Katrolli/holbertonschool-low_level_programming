#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, max = 0;

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
			max++;
		}
		else
		{
			if (max > 0)
			{
				break;
			}
		}
	}
	return (max);
}
