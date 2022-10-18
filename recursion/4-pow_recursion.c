#include "main.h"

/**
 * _pow_recursion - main function
 * @x: is a paramater
 * @y: is a paramater
 * Return: pow as an int
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
