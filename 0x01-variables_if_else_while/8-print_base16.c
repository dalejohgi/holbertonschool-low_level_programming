#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char af = 'a';
	int m = '0';

	while (m <= '9')
{
	putchar(m);
	m++;
}
	while (af <= 'f')
{
	putchar(af);
	af++;
}
{
	putchar('\n');
}
return (0);
}
