#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 *print_strings - Print strings
 *@n: Number of strings
 *@separator: Separator string
 *
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i = 0;
	char *str;

	va_start(strings, n);
	while (i < n)
	{
		str = va_arg(strings, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (i < n - 1 && separator)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(strings);
}
