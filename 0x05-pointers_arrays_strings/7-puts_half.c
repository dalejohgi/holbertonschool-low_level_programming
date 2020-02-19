#include "holberton.h"
/**
 *puts_half - Function
 *@str: string
 */
void puts_half(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		i = (i - (i / 2));
		while (str[i] != '\0')
		{
		_putchar(str[i]);
		i++;
		}
	_putchar('\n');
	}
	else
	{
		i = i - ((i - 1) / 2);
		while (str[i] != '\0')
		{
		++i;
		_putchar(str[i]);
		}
	_putchar('\n');
	}
}

