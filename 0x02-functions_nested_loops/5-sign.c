#include "holberton.h"
/**
 * print_sign - check the code for Holberton School students.
 *@c: - Variable
 *  Return: Always 0.
 */
int print_sign(int c)
{
	int g = 43;
	int l = 45;
	int z = 48;

	if (c > 0)

		{
		_putchar(g);
		return (1);
		}
	else if (c < 0)
		{
		_putchar(l);
		return (-1);
		}
	else
		{
		_putchar(z);
		return (0);
		}
}
