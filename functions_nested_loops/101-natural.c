#include <stdio.h>
/**
 * main - this is the entry point of the program
 * Return: returns 0 if sucess
 */



int main(void)
{
	int i, j;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			j += i;
		}
	}
	printf("%d\n", j);
	return (0);
}
