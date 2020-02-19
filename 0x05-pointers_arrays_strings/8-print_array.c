#include "holberton.h"
#include <stdio.h>
/**
 *print_array - Function
 *@a: string
 *n: Counter
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
	if (i != n - 1)
	{
		printf("%d, ", a[i]);
		i++;
	}
	else
	{

		printf("%d\n", a[i]);
		i++;
	}
	}
}
