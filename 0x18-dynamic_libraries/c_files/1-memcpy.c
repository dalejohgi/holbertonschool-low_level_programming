#include "holberton.h"
/**
 *_memcpy - Function to fill some specific space of  THE MEMMORY
 *@dest: Dest string
 *@src: Source string
 *@n: Number of spaces to fill
 *Return: Dest string
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
return (dest);
}
