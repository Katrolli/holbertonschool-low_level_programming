#include "main.h"
#include <stddef.h>

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (c == s[i])
		{
			return (&s[i]);
		}
	}
	if (c == '\0')
	{
		return (&s[i]);
	}
	return (NULL);
}
