#include "holberton.h"
/**
 *_strcmp - Function that compares two strings
 *@s1: String 1
 *@s2: String 2
 *Return: f
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int n = 0;

	while ((s1[i] != '\0') || (s2[n] != '\0'))
	{
		if (s1[i] == s2[n])
		{
		return (0);
		continue;
		}
		else if (s1[i] > s2[n])
		{
		return (s1[i] - s2[n]);
		}
		else
		{
		return (-(s2[n] - s1[i]));
		}
	i++;
	n++;
	}
return (0);
}
