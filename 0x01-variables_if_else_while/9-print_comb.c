#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int comb;

	for (comb = 48; comb <= 57; comb++)
	{
	putchar(comb);
		if (comb != 57)
		{
		putchar(',');
		putchar(' ');
		}
	}
	{
	putchar('\n');
	}
return (0);
}
