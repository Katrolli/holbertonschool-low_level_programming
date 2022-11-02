#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - main function
 * @separator: string of spaces
 * @n: n numbers to add
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list variadic;
	char *s;

	va_start(variadic, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(variadic, char *);
		if (s == NULL)
			s = "(nil)";
		printf("%s", s);
		if (separator != NULL)
		{
			if (i != n - 1)
				printf("%s", separator);
		}
	}
	va_end(variadic);
	printf("\n");
}
