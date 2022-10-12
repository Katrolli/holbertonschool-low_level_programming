#include "main.h"
/**
 * cap_string - main func
 *
 * @srt: is a parameter
 * Return: return 1
 */
char *cap_string(char *srt)
{
	int i = 0;

	if (srt[i] >= 'a' && srt[i] <= 'z')
		srt[i] -= 32;
	for (i = 0; srt[i] != '\0'; i++)
	{
		if (srt[i] == ' ' || srt[i] == ',' || srt[i] == ';' || srt[i] == '.' || srt[i] == '!' || srt[i] == '\n' || srt[i] == '\t' || srt[i] == '?' || srt[i] == '"' || srt[i] == '(' || srt[i] == ')' || srt[i] == '{' || srt[i] == '}')
		{
			i++;
			if (srt[i] >= 'a' && srt[i] <= 'z')
				srt[i] -= 32;
			i--;
		}
	}
	return (srt);
}
