#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int comb;

	for (comb = 48; comb <= 057057; comb++)
	{
	putchar(comb);
		if (comb != 057057)
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
