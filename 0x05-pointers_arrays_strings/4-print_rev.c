#include "holberton.h"
/**
 *print_rev - Function to print a reversed string?
 *@s: Variable
 *
 */
void print_rev(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
i = i - 1;
	while (i >= 0)
	{
		--i;
		--s;
		_putchar(*s);
	}

_putchar('\n');
}
