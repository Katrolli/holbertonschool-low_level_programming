#include "main.h"
#include <unistd.h>

/**
 * _isalpha - main func
 * Return: returns 0 if sucess
 * @c: paramater for the function
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
