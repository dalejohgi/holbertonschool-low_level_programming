#include "holberton.h"
/**
 *_strlen_recursion - Function to get the lenght of a string
 *@s: Variable
 *Return: The lenght of the string
 *
 *
 */
int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
	return (1 + _strlen_recursion(s + 1));
	}
}
