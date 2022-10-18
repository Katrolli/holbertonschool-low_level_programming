#include "main.h"
#include <stddef.h>

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == '\0')
	{
		return (haystack);
	}
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
