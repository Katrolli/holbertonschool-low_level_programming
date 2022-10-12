#include "main.h"
/**
 * reverse_array - main func
 *
 * @a: is a parameter
 * @n: is a paramater
 * Return: return 1
 */
void reverse_array(int *a, int n)
{
	int i = 0, tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}

}
