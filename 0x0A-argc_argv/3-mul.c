#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - Fuction To multiply 2 numbers
 *@argc: Lenght of argv
 *@argv: String
 *Return: 0 if succes, 1 if not
 */
int main(int argc, char *argv[])
{
	int mult, a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		mult = a * b;
		printf("%d\n", mult);
		return (0);

}
