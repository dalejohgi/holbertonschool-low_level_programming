#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all - Sum the n arguments provided
 *@n: number of args to sum
 *@...: indicate there are gonna be avy number of args
 *Return: result
 *
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0, sum = 0;
	va_list nums;

	va_start(nums, n);

	while (i < n)
	{
		sum += va_arg(nums, int);
		i++;
	}
	va_end(nums);
return (sum);
}
