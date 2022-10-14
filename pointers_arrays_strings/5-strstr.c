#include "main.h"
#include <stddef.h>
/**
 * _strstr - main func
 *
 * @haystack: is a parameter
 * @needle: is a parameter
 * Return: return
 */
char *_strstr(char *haystack, char *needle)
{
	 int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		int same = 1;

		if (haystack[i] == needle[0])
		{

		for (j = 1; needle[j] != '\0'; j++)
			if (haystack[i + j] != needle[j])
			{
				same = 0;
			}
		}
		else
		{
			same = 0;
		}
		if (same)
			return (&haystack[i]);
	}
	return (NULL);
}
