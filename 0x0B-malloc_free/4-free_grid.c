#include <stdlib.h>

/**
 * free_grid - frees  the grid
 * @grid: grid to clear
 * @height: come on rlly u know
 *
 *
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
