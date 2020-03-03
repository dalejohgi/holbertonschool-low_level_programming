#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *create_array - Function to create arrays of size elements
 *@size: Size for the array
 *@c: Value for elements
 *Return: NULL if there is no space, pointer to string if succes
 *
 */
char *create_array(unsigned int size, char c)
{
	char *s = malloc(sizeof(char) * size); /**array s con size elementos*/
	unsigned int i = 0; /**El contador para poner c en cada posicion */

	while (i < size) /**Ciclo para llenar *(s + i) con el valor de c*/
	{
		s[i] = c;
		i++;
	}
	if (size == 0) /**Condicion del ejercicio*/
	{
	return (NULL);
	}
	else if (s == NULL) /**Evita un segfault*/
	{
	return (NULL);
	}
return (s); /** Retorna puntero a mi string */
}
