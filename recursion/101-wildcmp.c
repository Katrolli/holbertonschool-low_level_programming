#include "main.h"
/**
 * wildcmp - main function
 * @s1: is a paramater
 * @s2: is a paramater
 * Return: pow as an int
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
	{
		s1++;
		s2++;
		return (wildcmp(s1, s2));
	}
	if (*s2 == '*')
	{
		s2++;
		if (*s2 == '\0')
			return (1);
		return (wildcmp(s1, s2));
	}
	if (*s1 != *s2 && *s2-- != '*')
	{
		if (*s1 == '\0' || *s2 == '\0')
			return (0);
		s1++;
		return (wildcmp(s1, s2));
	}
	return (0);
}
