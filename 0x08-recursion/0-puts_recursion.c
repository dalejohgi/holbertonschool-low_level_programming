#include "holberton.h"
/**
 *_puts_recursion - Function to print a string using recursion
 * @s: pointer to the string
 * Return: void
 *
 */
void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
