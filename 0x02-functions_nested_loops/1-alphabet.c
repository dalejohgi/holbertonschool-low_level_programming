#include "holberton.h"
/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int i = 0;
	char s[] = "abcdefghijklmnopqrstuvwxyz";

	while (i <= 25)
	{
		_putchar(s[i]);
		i++;
	}
_putchar('\n');
}
