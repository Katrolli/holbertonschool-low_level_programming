#include <stdlib.h>
#include <stdio.h>
/**
 * op_add -main function
 * @a: first parameter
 * @b: second paramater
 * Return: returns the sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - main function
 * @a: first paramater
 * @b: second paramater
 * Return: returns the substraction
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - main function
 * @a: first parameter
 * @b: second paramater
 * Return: returns the multiplication
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - main function
 * @a: first parameter
 * @b: second parameter
 * Return: returns the division
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		puts("Error");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - main function
 * @a: first parameter
 * @b: second parameter
 * Return: returns the mod
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		puts("Error");
		exit(100);
	}
	return (a % b);
}
