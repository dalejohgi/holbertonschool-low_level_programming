#include "holberton.h"
#include <stdio.h>
/**
 *rev_string - Function to print a reversed string?
 *@s: Variable
 *
 */
void rev_string(char *s)
{
	int b, x = 0;
	int a = _strlen(s) - 1;
	char z[100];

	for (b = a; b >= 0 ; b--)
	{
		z[x] = s[b];
		x++;

	}
	for (b = 0; b <= a; b++)
	{
		s[b] = z[b];
	}
}
