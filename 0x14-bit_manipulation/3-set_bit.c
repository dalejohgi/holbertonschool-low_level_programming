#include "holberton.h"
/**
 *set_bit - Set a bit in a index position
 *@n: Pointer to number to scan
 *@index: Position to set the bit
 *Return: 1 if success -1 if fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 0;

	if (index > sizeof(n) * 8)
		return (-1);

	while (i < index)
	{
		*n >>= 1;
		i++;
	}
	if ((*n & 1) == 1)
		return (1);

	*n = *n + 1;
	*n <<= (i);
	return (1);
}
