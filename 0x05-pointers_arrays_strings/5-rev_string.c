#include "holberton.h"
/**
 *rev_string - Function to print a reversed string?
 *@s: Variable
 *
 */
void rev_string(char *s)
{
	int i = 0;
	int m = 0;
	char t;

	while (s[i] != '\0')
	{
		i++;
	}
	--i;
	while (m < i)
	{
		t = s[i];
		s[i] = s[m];
		s[m] = t;
		m++;
		i--;
	}
}
