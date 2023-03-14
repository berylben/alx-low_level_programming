/**
 * free_grid - function that frees 2-D grid previously created
 * by your alloc_grid
 * @grid: matrix rows
 * @height: string column
 * Return: 0 always success
 */

#include "main.h"
#include <stdlib.h>
#include <stdio.h>

void free_grid(int **grid, int height)
{
	int i;
	int *p;

	for (i = 0; i < height; i++)
	{
		p = grid[i];
		free(p);
	}
	free(grid);
}
