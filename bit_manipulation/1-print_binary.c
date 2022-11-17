#include "main.h"
/**
 * print_binaryt - main function
 * @n: string of binary
 * Return: returns the convertet nr
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
