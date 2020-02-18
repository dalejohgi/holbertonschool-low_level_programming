#include"holberton.h"
/**
 *_puts - Function to print a nice string xD
 *@str: string
 *
 *
 */
void _puts(char *str)
{


	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
_putchar('\n');
}
