#include "holberton.h"
/**
 *get_bit - Get a bit in a index position
 *@n: Number to scan
 *@index: Position to get the bit
 *Return: The bit in index position, o -1 if fails
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	if (index > sizeof(n) * 8)
		return (-1);

	while (i < index)
	{
		n >>= 1;
		i++;
	}
	if ((n & 1) == 1)
		return (1);
	else
		return (0);
}
