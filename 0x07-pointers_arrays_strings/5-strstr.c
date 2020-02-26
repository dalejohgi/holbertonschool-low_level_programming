#include "holberton.h"
/**
 *_strstr - Function
 *@haystack: Pointer
 *@needle: Pointer
 *Return: Pointer
 *
 *
 */
char *_strstr(char *haystack, char *needle)
{

	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*haystack && *n && *haystack == *n)
		{
			haystack++;
			n++;
		}
		if (!*n)
			return (h);

		haystack = h + 1;
	}
	return ('\0');
}
