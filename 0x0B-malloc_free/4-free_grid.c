#include "main.h"
/**
 * free_grid -  a function that frees a 2 dimensional grid previously created
 * @grid: takes in width of grid
 * @height: height of grid
 * Return: free grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
