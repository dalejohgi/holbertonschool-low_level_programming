#include "holberton.h"
/**
 *swap_int - Function to swap two integers
 *@a: Variable
 *@b: Variable
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
