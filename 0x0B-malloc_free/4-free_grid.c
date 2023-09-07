#include <stdlib.h>
#include "main.h"

/**
 * free_grid - the memory allocate for the grid will be free
 * created by alloc_grid()
 * @grid: the grid to be free
 * @height: height of the grid in int
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}

