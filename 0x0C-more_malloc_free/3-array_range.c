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
	int size = max - min + 1;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * size);
	if (p == NULL)
		return (NULL);
	while (i < size)
	{
		p[i] = min;
		i++;
		min++;
	}
return (p);
}
