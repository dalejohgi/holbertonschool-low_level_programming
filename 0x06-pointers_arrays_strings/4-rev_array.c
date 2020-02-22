#include "holberton.h"
/**
 *reverse_array - Function to reverse a string of integers
 *@n: Length of the string
 *@a: String
 *
 */
void reverse_array(int *a, int n)
{
	int m = 0;
	int tmp;
	--n;

	while (m < n)
	{
	tmp = a[m];
	a[m] = a[n];
	a[n] = tmp;
	n--;
	m++;
	}
}
