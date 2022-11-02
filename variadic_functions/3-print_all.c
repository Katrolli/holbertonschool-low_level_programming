#include "3-functionts_to_print.h"
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list va;

	va_start(va, format);
	while (format != NULL && format[i] != '\0')
	{
		char chr = format[i];
		int isvalid = chr == 'c' || chr == 's' || chr == 'i' || chr == 'f';

		switch (chr)
		{
			case 'c':
				p_char(va_arg(va, int));
				break;
			case 's':
				p_string(va_arg(va, char*));
				break;
			case 'i':
				p_integer(va_arg(va, int));
				break;
			case 'f':
				p_float(va_arg(va, double));
				break;
			default:
				break;
		}
		i++;
		if (format[i] != '\0' && isvalid)
			printf(", ");
	}
	printf("\n");
}
