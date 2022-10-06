#include "main.h"
#include <unistd.h>

/**
 * _isdigit - main func
 * Return: returns - if success
 * @c: is a parameter
 */
int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
