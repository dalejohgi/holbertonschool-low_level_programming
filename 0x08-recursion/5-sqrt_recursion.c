#include "holberton.h"
/**
  *_scanroot - Scan the posibles roots
  *@i: podibles roots
  *@n: radicand
  *Return: Natural root
  *
  */
int _scanroot(int n, int i)
{
	if (i * i == n)
	{
		return  (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	return (_scanroot(n, i + 1));
}
/**
 *_sqrt_recursion - Function to get the natural root
 *@n: Radicand
 *Return: Natural root
 *
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_scanroot(n, 0));
}
