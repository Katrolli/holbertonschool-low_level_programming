#include "main.h"
#include <unistd.h>

/**
 * _islower - main func
 * Return: returns 0 if sucess
 * @c: paramater for the function
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
