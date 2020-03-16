#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 *print_numbers - print numbs separated by an string
 *@separator: separator
 *@n: Number of numbs
 *
 *
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, num = 0;
	va_list numbers;

	if (separator != NULL)
	{
		va_start(numbers, n);
		while (i <= n)
		{
			num = va_arg(numbers, int);
			printf("%d", num);
			i++;
			if (i != n + 1)
				printf("%s", separator);
		}
		printf("\n");
		va_end(numbers);
	}
	else
	{
		va_start(numbers, n);
		while (i <= n)
		{
			num = va_arg(numbers, int);
			printf("%d", num);
			i++;
		}
		printf("\n");
		va_end(numbers);
	}
}
