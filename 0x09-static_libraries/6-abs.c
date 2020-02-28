#include "holberton.h"
/**
 *_abs - Entry point
 *@c: - Declaración de variable
 * Return: Always 0 (Success)
 */
int _abs(int c)
{
	int v = (-1 * c);

	if (c >= 0)

		{
		return (c);
		}
	else
		{
		return (v);
		}

}
