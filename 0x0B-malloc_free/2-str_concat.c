#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *str_concat - concatenate 2 strings
 *@s1: String 1
 *@s2: String 2
 *Return: String if success, else NULL
 *
 */
char *str_concat(char *s1, char *s2)
{
	int size1 = 0;
	int size2 = 0;
	int i = 0;
	int j = 0;
	char *s3;

	while (s1[size1])
	{
		size1++;
	}
	while (s2[size2])
	{
		size2++;
	}
	s3 = malloc(sizeof(char) * (size1 + size2 + 1));

	if (s3 == NULL)
	{
		return (NULL);
	}
	while (i < size1)
	{
		s3[i] = s1[i];
		i++;
	}
	while (j < size2)
	{
		s3[i] = s2[j];
		i++;
		j++;
	}
s3[i] = '\0';
return (s3);
}
