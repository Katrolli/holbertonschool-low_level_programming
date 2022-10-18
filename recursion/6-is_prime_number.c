#include "main.h"
int prime(int n, int root);

/**
 * is_prime_number - main function
 * @n: is a paramater
 * Return: pow as an int
 */
int is_prime_number(int n)
{
	int i = 0;

	return (prime(n, i));
}

/**
 * prime - secondary function
 * @n: is a paramater
 * @root: is a paramater
 * Return: return root
 */
int prime(int n, int root)
{
	if (root * root == n || n < 0)
		return (0);
	else if (root * root > n)
		return (-1);
	return (prime(n, root + 1));
}
