#include "holberton.h"
#include <stdio.h>
/**
 *main - Print all arguments it receives
 *@argc: Lenght of argv
 *@argv: String of elements
 *Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
return (0);
}
