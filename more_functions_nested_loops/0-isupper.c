#include "main.h"
#include <unistd.h>

/**
 * _isupper - main func
 * Return: returns - if success
 * @c: is a parameter
 */
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
