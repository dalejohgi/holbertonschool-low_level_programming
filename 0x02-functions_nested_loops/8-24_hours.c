#include "holberton.h"
/**
 *jack_bauer - Entry point
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int b1 = 0;
	int b2;

	while (b1 < 24)
		{
		b2 = 0;
		while (b2 < 60)
			{
			_putchar('0' + (b1 / 10));
			_putchar('0' + (b1 % 10));
			_putchar(':');
			_putchar('0' + (b2 / 10));
			_putchar('0' + (b2 % 10));
			_putchar('\n');
			b2++;
			}
		b1++;
		}
}
