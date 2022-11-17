#include "main.h"
#include <stdlib.h>
/**
 * get_bit - main function
 * @n: string of binary
 * @index: position of bit
 * Return: returns the convertet nr
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
	{
		return (-1);
	}
	if (n != 0)
	{
		*n = *n | (1 << index);
		return (1);
	}
	return (-1);
}
