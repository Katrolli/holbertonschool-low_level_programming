#include <stdio.h>
#include "main.h"
#include <math.h>

/**
 * main - main function
 * Return: returns 0 if succesful
 */

int main(void)
{
	long int num = 612852475143;
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


	printf("Largest prime is : %ld\n", maxPrime);
	return (0);
}
