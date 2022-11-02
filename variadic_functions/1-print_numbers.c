#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - main function
 * @separator: string of spaces
 * @n: n numbers to add
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list variadic;

	va_start(variadic, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(variadic, int));
		if (separator != NULL)
		{
			if (i != n - 1)
				printf("%s", separator);
		}
	}
	va_end(variadic);
	printf("\n");
}
