#include "holberton.h"
/**
 *print_square - Function to print o to 9 numbers
 *@size: variable
 *
 */
void print_square(int size)
{
	int a;
	int b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}
