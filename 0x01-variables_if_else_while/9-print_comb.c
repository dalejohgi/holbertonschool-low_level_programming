#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int az = '0';
	int s = ' ';
	int c = ',';

	while (az <= '9')
	{	
	putchar(az);
		if (az < '9')
		{
		putchar(c);
		putchar(s);
		}
	az++;
	}
return (0);
}
