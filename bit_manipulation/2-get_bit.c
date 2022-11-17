#include "main.h"
/**
 * get_bit - main function
 * @n: string of binary
 * @index: position of bit
 * Return: returns the convertet nr
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
	{
		return (-1);
	}
	if (n != 0)
	{
		n = (n >> index) & 1;
		return (n);
	}
	return (-1);
}
