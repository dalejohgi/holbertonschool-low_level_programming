#include "holberton.h"
/**
 *print_numbers - Function to print o to 9 numbers
 *
 *
 */
void print_numbers(void)
{
	char n[] = "0123456789";
	int i = 0;

	while (i < 10)
	{
	_putchar(n[i]);
	i++;
	}
	_putchar('\n');

}
