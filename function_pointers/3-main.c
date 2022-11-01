#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
 * main - main function
 * @argc: argument number
 * @argv: parameters
 * Return: 0 if ok
 */
int main(__attribute__((unused))int argc, char **argv)
{
	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}
	printf("%d", (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
