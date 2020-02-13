#include "holberton.h"
/**
 *_isupper - Entry point
 *@c: - Declaración de variable
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
