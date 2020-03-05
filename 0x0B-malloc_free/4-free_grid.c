#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *free_grid - Free the allocated memory used in the last excercise
 *@grid: pointer to grid
 *@height: height of the grid
 *Return: Void if there is no allocated memory to free
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL || height < 1)
	{
		return;
	}

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
}
