#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_strdup - Ducplicate a string
 *@str: String to duplicate
 *Return: Pointer to new string if succes, else NULL
 *
 *
 */
char *_strdup(char *str)
{
	char *a;
	unsigned int size = 0;
	unsigned int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[size])
	{
		size++;
	}

	a = malloc(sizeof(char) * size);

	if (a == NULL)
	{
		return (NULL);
	}
	while (i <= size)
	{
		a[i] = str[i];
		i++;
	}
return (a);
}
