#include "main.h"
int __sqrt(int n, int root);

/**
 * _sqrt_recursion - main function
 * @n: is a paramater
 * Return: pow as an int
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	return (__sqrt(n, i));
}

/**
 * __sqrt - secondary function
 * @n: is a paramater
 * @root: is a paramater
 * Return: return root
 */
int __sqrt(int n, int root)
{
	if (root * root == n)
		return (root);
	else if (root * root > n)
		return (-1);
	return (__sqrt(n, root + 1));
}
