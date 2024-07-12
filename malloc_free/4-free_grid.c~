#include "main.h"
#include <stdlib.h>
/**
 * free_grid - func
 * @grid: mattr
 * @height: int
 * Return: pointer
*/
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	{
		for (i = 0; i <= height; i++)
			free(grid[i]);
		free(grid);
	}
}
