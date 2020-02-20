#include "holberton.h"
/**
 *_strcmp - Function that compares two strings
 *@s1: String 1
 *@s2: String 2
 *Return: f
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int n;

	while (s1[i] != '\0')
	{
		i++;
	}
	--i;
	n = 0;
	while (s2[n] != '\0')
	{
		n++;
	}
	--n;
	if (i < n)
	{
		return (-15);
	}
	else if (i > n)
	{
		return (15);
	}
	else
	{
		return (0);
	}
}
