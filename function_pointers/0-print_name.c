#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - main function
 * @name: first paramater
 * @f: pointer to function
 */

void print_name(char *name, void (*f) (char *))
{
	if (f)
		(*f)(name);
}
