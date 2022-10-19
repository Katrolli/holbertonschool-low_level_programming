#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main program
 * @argc: number of arguments
 * @argv: pointer to an array of chars
 * Return: return 0
 */

int main(int argc, char *argv[])
{
	int i;
	int mult = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
		for (i = 1; i < argc; i++)
		{
			mult *= atoi(argv[i]);
		}
	printf("%i\n", mult);
	return (0);
}
