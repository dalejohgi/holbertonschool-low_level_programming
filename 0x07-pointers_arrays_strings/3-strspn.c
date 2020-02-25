#include "holberton.h"
/**
 *_strspn - Function to compare
 *@s: pointer to s
 *@accept: string to with the letters to compare
 *Return: number of cpnsecutives and coincident caracters between 2 strings
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int a;

	while (*s != '\0')
	{
		a = 0;
		while (accept[a] != '\0')
		{
			if (*s == accept[a])
			{
			i++;
			break;
			}
		a++;
		}
	if (accept[a] == '\0')
	{
	break;
	}
	s++;
	}
return (i);
}
