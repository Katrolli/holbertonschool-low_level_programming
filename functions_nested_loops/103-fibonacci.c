#include <stdio.h>
/**
 * main - this is the entry point of the program
 * Return: returns 0 if sucess
 */



int main(void)
{
	int i;
	long int n1 = 0, n2 = 1;
	long int sum, sumf;

	for (i = 3; i <= 35; ++i)
	{
		if (sum % 2 == 0 && sum < 4000000)
			sumf += sum;
		sum = n1 + n2;
		n1 = n2;
		n2 = sum;
	}
	printf("%ld\n", sumf);
	return (0);
}
