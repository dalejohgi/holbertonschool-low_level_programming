#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main - Function to sume integers
 *@argc: Counter
 *@argv: String
 *Return: 0 if succes, else 1
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	i = 1;
	j = 0;

	while (argv[i] != '\0') /* Busca caracteres en el string */
	{
		while (argv[i][j])
		{
			if (isdigit(argv[i][j]) == 0 || isdigit(argv[i] == 0))
			{
				printf("Error\n");
				return (1);
			}
		j++;
		}
	i++;
	}
	i = 1;

	while (argv[i] != argv[argc]) /* Suma las entradas */
	{
		sum += atoi(argv[i]);
		i++;
	}
printf("%d\n", sum);
return (0);
}
