#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees the 2D grid previously created
 * @grid: grid created by alloc_grid function
 * @height: height of the 2D grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
