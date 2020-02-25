#include "holberton.h"
/**
 *_strpbrk - Function
 *@s: pointer to s
 *@accept: string to with the letters to compare
 *Return: Pointer to the coincidence
 *
 */
char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s != '\0')
	{
		a = 0;

		while (accept[a] != '\0')
		{
			if (*s == accept[a])
			{
			break;
			}
		a++;
		}
	if (*s == accept[a])
	{
	break;
	}
	s++;
	}
return (s);
}
