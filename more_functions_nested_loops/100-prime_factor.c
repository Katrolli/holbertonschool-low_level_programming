#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * Largeprime - main function
 * @num: is a paramater
 * Return: returns 0 if succesful
 */

long int Largeprime(long int num)
{
	long int maxPrime;
	long int i;

	if (num % 2 == 0)
	{
		maxPrime = 2;
		while ( num % 2 == 0)
		{
			num = num / 2;
		}
	}
	for ( i = 3; i < sqrt(num); i = i + 2)
	{
		while (num % i == 0)
		{
			maxPrime = i;
			num = num / i;
		}
	}
	if (num > 2)
	{
		maxPrime = num;
	}
	return maxPrime;
}
