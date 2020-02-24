#include "holberton.h"
/**
 *_memset - Function to fill spaces in memmory
 *@s: array
 *@b: Value to put in memmory
 *@n: number of spaces to fill
 *Return: Actualized string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
return (s);
}
