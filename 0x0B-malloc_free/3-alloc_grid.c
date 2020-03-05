#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *alloc_grid - Create a grind of zeros
 *@width: Width of grid
 *@height: Height of grid
 *Return: poiter to the grid if success, else NULL
 */
int **alloc_grid(int width, int height)
{
	int j;
	int i = 0;
	int **p;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	p = (int **)malloc(sizeof(int *) * height);
	if (p == NULL)
	{
		return (NULL);
	}
	while (i < height)
	{
		p[i] = (int *)malloc(sizeof(int) * width);
		if (p[i] == NULL)
		{
			j = 0;
			while (j < i)
			{
				free(p[j]);
				j++;
			}
		free(p);
		return (NULL);
		}
		j = 0;
		while (j < width)
		{
			p[i][j] = 0;
			j++;
		}
	i++;
	}
return (p);
}

