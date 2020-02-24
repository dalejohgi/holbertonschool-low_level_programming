#include "holberton.h"
/**
 *_strchr - Function to find a character
 *@s: pointer to s
 *@c: Character to find
 *Return: Pointer to c
 *
 */
char *_strchr(char *s, char c)
{
	char a = '\0';

	while (*s != a)
	{
		if (*s == c)
		{
			return (s);
		}
	s++;
	}
return ("\0");
}
