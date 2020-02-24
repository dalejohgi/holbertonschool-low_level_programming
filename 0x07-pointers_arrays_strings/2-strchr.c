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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
	s++;
	}
return (s);
}
