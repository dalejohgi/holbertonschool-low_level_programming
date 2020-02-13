#include "holberton.h"
/**
 *print_most_numbers - Function to print from 0 to 9, except 2 nd 4 numbers
 *
 *
 */
void print_most_numbers(void)
{
	char n[] = "01356789";
	int i = 0;

	while (i < 10)
	{
	_putchar(n[i]);
	i++;
	}
	_putchar('\n');

}

