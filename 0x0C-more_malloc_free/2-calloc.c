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
	char *p;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	while (i < (nmemb * size))
	{
		p[i] = 0;
		i++;
	}
return (p);
}
