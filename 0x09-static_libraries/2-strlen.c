#include "holberton.h"
/**
 *_strlen - Function get the length of a string
 *Return: the length of the string
 *@s: Pointer
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
	i++;
	s++;
	}


return (i);
}
