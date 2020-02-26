#include "holberton.h"
#include <stdio.h>
/**
 *print_diagsums - Function
 *@a: pointer
 *@size: variable
 *
 *
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int p;
	int x = 0;
	int y = 0;

	for (i = 0; i < size; i++)
	{
		p = (i * size) + i;
		y += *(a + p);
	}
	for (j = 0; j < size; j++)
	{
		p = (j * size) + (size - 1 - j);
		x += *(a + p);
	}
	printf("%i, %i\n", x, y);
}
