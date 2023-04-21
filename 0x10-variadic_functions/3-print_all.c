#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: list of types of arg
 */
void print_all(const char * const format, ...)
{
	int i;
	char *z, *separator = "";

	va_list args;

	va_start(args, format);

	i = 0;
	if (format != NULL)
	{
		while (format[i] != '\0')
		{
			switch (format[i])
			{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				z = va_arg(args, char *);
				if (z == NULL)
					z = "(nil)";
				printf("%s%s", separator, z);
				break;
			default:
				i++;
				continue;
			}
			separator = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(args);
}
