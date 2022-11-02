#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
/**
 * main - main unction
 * @argc: argument number
 * @argv: parameters
 * Return: 0 if ok
 */
int main(int argc, char **argv)
{
	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}
	if (strlen(argv[2]) > 1)
	{
		puts("Error");
		exit(99);
	}
	printf("%d\n", (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
