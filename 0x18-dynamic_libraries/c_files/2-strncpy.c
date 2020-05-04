#include "holberton.h"
/**
 *_strncpy - Function
 *@dest: destination variable
 *@src: source variable
 *@n: Integer variable
 *Return: A new string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
return (dest);
}
