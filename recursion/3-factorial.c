#include "main.h"

/**
 * factorial - main function
 * @n: is a paramater
 * Return: n as an int
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
