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

	if (separator == NULL)
		separator = "";

	va_start(strings, n);
	while (i <= n)
	{
		str = va_arg(strings, char *);
		if (str == NULL)
			printf("nil");
		else
			printf("%s", str);
		if (i < n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(strings);
}
