#include "holberton.h"
/**
 *
 *dest s1   src s2
 *
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int n;
			
	for (i = 0; dest[i] != '\0'; i++) /** Desplaza el "cursor" hasta el nulo*/
	{
	}
	for (n = 0; src[n] != '\0'; n++, i++)
	{
	dest[i] = src[n];
	}
	return (dest);
}
