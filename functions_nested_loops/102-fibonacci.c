#include <stdio.h>
/**
 * main - this is the entry point of the program
 * Return: returns 0 if sucess
 */



int main(void)
{
	long int i = 1;
	long int j = 2;
	int x;

	printf("%ld, ", i);
	printf("%ld, ", j);

		for (x = 0; x < 48; x++)
		{
			long int next = i + j;

			i = j;

			j = next;

			printf("%ld", next);
			if (x == 47)
				continue;
			printf(", ");

		}
	printf("\n");
	return (0);
}
