#include "holberton.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i;
	char s[] = "abcdefghijklmnopqrstuvwxyz";
	int l = 0;

	while (l <= 10)
	{
	i = 0;
		while (i <= 25)
		{
		_putchar(s[i]);
		i++;
		}
		_putchar('\n');
		l++;
	}
}
