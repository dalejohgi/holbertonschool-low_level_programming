#include "holberton.h"
/**
 *_strncat - Function
 *@dest: Variable
 *@src: variable
 *@n: Integer
 *Return: New string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int m;

	for (i = 0; dest[i] != '\0'; i++) /** Desplaza el "cursor" hasta el nulo*/
	{
	}
	for (m = 0; m < n && src[m] != '\0'; m++, i++)
	{
	dest[i] = src[m];
	}
	return (dest);
}
