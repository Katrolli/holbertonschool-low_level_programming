#include "main.h"
/**
 * _atoi - main func
 *
 * @s: is a parameter
 * Return: return 1
 */
int _atoi(char *s)
{
	int number = 0;
	int i = 0;
	int sign = 1;

	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	{
		i++;
	}
	while (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
		{
			sign = -1;
		}
		i++;
	}
	if (s[i] == ' ')
	{
		sign = 1;
	}
	while ((s[i] < '0' || s[i] > '9') && s[i] != '\0')
	{
		i++;
	}
	while (s[i] && s[i] >= '0' && s[i] <= '9')
	{
		number = (number * 10) + (s[i] - '0');
		s++;
	}
	return (sign * number);
}
