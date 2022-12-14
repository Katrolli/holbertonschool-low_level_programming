#include "main.h"
#include <stdlib.h>
/**
 * flip_bits - main function
 * @n: string of binary
 * @m: position of bit
 * Return: returns the convertet nr
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count_bits = 0;
	unsigned long int result_xor = n ^ m;

	while (result_xor)
	{
		count_bits += (result_xor & 1);
		result_xor >>= 1;
	}
	return (count_bits);
}
