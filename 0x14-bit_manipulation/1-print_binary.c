#include "holberton.h"
/**
 *print_binary - Evaluates if n is equal to zero
 *@n: number to evaluates
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
	}
	else
	recursion(n);
}
/**
 *recursion - prints in binary
 *@n: Integer to print in binary
 */
void recursion(unsigned long int n)
{
	unsigned long int bit;

	if (n == 0)
		return;
	bit = (n & 1);
	recursion(n >> 1);
	_putchar('0' + bit);

}
