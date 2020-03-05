#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *string_nconcat - Concatenate a s1 with the n caracters of s2
 *@s1: String 1
 *@s2: string 2
 *@n: Number of elements to include of s2
 *Return:Pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, l;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i] != '\0') /**Contador de s1 */
	{
		i++;
	}
	j = 0;
	while (j < n && s2[j] != '\0') /**Contador del segundo string hasta n*/
	{
		j++;
	}
	concat = malloc(sizeof(char) * (i + j) + 1); /**allocate memory*/
	if (concat == NULL)
		return (NULL); /**Condicion de fallo de malloc*/
	k = 0;
	while (k < i)
	{
		concat[k] = s1[k]; /**Escribe primera parte del string*/
		k++;
	}
	l = 0;
	while (l < j)
	{
		concat[k] = s2[l]; /**Escribe segunda parte del string*/
		k++;
		l++;
	}
	concat[k] = '\0';
	return (concat);
}
