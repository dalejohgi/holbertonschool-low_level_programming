#include "holberton.h"
/**
 *more_numbers - 10 times numbers from 0 to 14
 */
void more_numbers(void)
{
	int i;
	int n = 1;

	while (n <= 10)
	{
		i = 0;
		while (i <= 14)
		{
		if (i <= 9)
		{
		_putchar('0' + i);
		i++;
		}
		else
		{
		_putchar('0' + (i / 10));
		_putchar('0' + (i % 10));
		i++;
		}
		}
	_putchar('\n');
	n++;
	}
}
