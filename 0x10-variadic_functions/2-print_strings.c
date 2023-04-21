#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of arg
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *z;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		z = va_arg(args, char *);

		if (z == NULL)
		{
			printf("(nil)");
		}
		else
			printf("%s", z);

		if ((i != n - 1) && (separator != NULL))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
