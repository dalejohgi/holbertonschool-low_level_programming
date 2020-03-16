#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 *print_all - prints several formats
 *@format: format to print
 *
 *
 *
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list arg;
	char *separator = "";

	va_start(arg, format);
	while (format[i] && format)
	{
		if(separator)
			printf("%s", separator);
		else
			printf("(nil)");
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(arg, int));
				separator = ", ";
				break;
			case 's':
				printf("%s", va_arg(arg, char *));
				separator = ", ";
				break;
			case 'f':
				printf("%f", va_arg(arg, double));
				separator = ", ";
				break;
			case 'i':
				printf("%d", va_arg(arg, int));
				separator = ", ";
				break;
			default:
				separator = "";
				break;
		}
	i++;
	}
	va_end(arg);
printf("\n");
}
