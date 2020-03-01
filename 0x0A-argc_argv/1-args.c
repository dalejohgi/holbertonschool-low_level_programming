#include "holberton.h"
#include <stdio.h>
/**
 *main - Prints the number of arguments passed into it
 *@argc: lenght of argv[]
 *@argv: String of elements
 *Return: Zero if success;
 *
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
