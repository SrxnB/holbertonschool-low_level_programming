#include "main.h"

/**
 * free_grid - a function that frees a 2 dimensional grid previously created
 * by your alloc_grid function.
 *
 *@grid: multidimensional array of integers
 *@height: height of arr
 */

void free_grid(int **grid, int height)
{
	int n;

	if (grid != NULL || height != 0)
	{
		for (n = height; n >= 0; n--)
		{
			free(grid[n]);
		}
		free(grid);
	}
}
