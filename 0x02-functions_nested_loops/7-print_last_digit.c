#include "holberton.h"
/**
 *print_last_digit - Entry point
 *@c: - Declaración de variable
 * Return: Always 0 (Success)
 */
int print_last_digit(int c)
{
	int l = (c % 10);
	int abs = (c * -1);
	int ln	= (abs % 10);

	if (c == 0)
		{
		_putchar('0' + c);
		return (c);
		}
	else if (c > 0)
		{
		_putchar('0' + l);
		return (l);
		}
	else
		{
		_putchar('0' + ln);
		return (ln);
		}

}
