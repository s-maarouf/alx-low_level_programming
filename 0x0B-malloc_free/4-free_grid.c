#include "main.h"

/**
 * free_grid - is a function that frees a 2 dimensional grid
 *		previously created by "alloc_grid" function.
 *
 * @grid: is the grid to free
 * @height: is the height of the grid
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		while (height >= 0)
		{
			free(grid[height]);
			height--;
		}
		free(grid);
	}
}
