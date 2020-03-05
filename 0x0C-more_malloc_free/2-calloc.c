#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_calloc - Allocates memory initialized in zero
 *@nmemb: Number of elements
 *@size: Size of a specific variable
 *Return: Pointer to allocated memory
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;
	unsigned int n = nmemb * size;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(n);
	if (p == NULL)
		return (NULL);
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
return (p);
}
