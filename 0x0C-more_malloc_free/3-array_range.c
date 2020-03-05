#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *array_range - Create an array of integers
 *@min: minimum
 *@max: maximum
 *Return: Pointer to array
 *
 */
int *array_range(int min, int max)
{
	int *p;
	int i = 0;

	if (min > max)
		return (0);
	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
		return (NULL);
	while (i <= max)
	{
		p[i] = min;
		i++;
		min++;
	}
return (p);
}
