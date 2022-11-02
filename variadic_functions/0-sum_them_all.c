#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - main function
 * @n: n numbers to add
 * Return: returns the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list variadic;

	va_start(variadic, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(variadic, unsigned int);
	}
	va_end(variadic);
	return (sum);
}
