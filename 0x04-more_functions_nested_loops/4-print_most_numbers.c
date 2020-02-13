#include "holberton.h"
/**
 *print_most_numbers - Function to print from 0 to 9, except 2 nd 4 numbers
 *
 *
 */
void print_most_numbers(void)
{

	int i = 0;

	while (i < 10)
	{
	if (i != 2 && i!= 4)
	{
	_putchar('0' + i);
	i++;
	}
	else
	{
	i++;
	}
	}
	_putchar('\n');

}

