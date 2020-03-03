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
	int size = 0;
	int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[size] != '\0')
	{
		size++;
	}

	a = malloc(sizeof(char) * i + 1);

	if (a == NULL)
	{
		return (NULL);
	}
	while (i <= size)
	{
		a[i] = str[i];
		i++;
	}
a[i + 1] = '\0';
return (a);
}
