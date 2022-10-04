#include "main.h"
#include <unistd.h>

/**
 * _abs - main func
 * Return: returns 0 if sucess
 * @n: paramater for the function
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = (-1) * n;
	}
	return (n);
}
