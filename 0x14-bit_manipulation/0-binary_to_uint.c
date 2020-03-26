#include "holberton.h"
/**
 *binary_to_uint - Convert binary to decimal
 *@b: Pointer to string wit the binary number
 *Return: Decimal number if succes 0 if not
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, decimal = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0') /**Cuenta el string y decanta*/
	{
		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}
		decimal <<= 1;
		if (b[i] == '1')
		{
			decimal += 1;
		}
		i++;
	}
	return (decimal);
}
