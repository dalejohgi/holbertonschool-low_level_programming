#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints the name of the current file before be compiled
 *Return: Exit
 *
 */
int main(void)
{
	printf(__FILE__);
	printf("\n");
	return (EXIT_SUCCESS);
}
