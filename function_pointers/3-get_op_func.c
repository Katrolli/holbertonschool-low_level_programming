#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - gets the right op
 * @s: input op
 * Return: right function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*ops[i].op == *s)
		{
			return (ops[i].f);
		}
		i++;
	}
	puts("Error");
	exit(99);
	return (NULL);
}
