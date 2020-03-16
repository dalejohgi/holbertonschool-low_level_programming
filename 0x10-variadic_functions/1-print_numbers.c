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

		va_start(numbers, n);
		while (i < n)
		{
			num = va_arg(numbers, int);
			printf("%d", num);
			if (i < n - 1 && separator)
				printf("%s", separator);
			i++;
		}
		printf("\n");
		va_end(numbers);

}
