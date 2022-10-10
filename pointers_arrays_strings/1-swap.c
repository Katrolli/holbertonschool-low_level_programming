#include "main.h"
/**
 * swap_int - main func
 *
 * @a: is a parameter
 * @b: is a parameter
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
