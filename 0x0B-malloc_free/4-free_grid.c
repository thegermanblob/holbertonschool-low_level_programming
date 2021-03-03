#include <stdlib.h>

/*
 * free_grid - frees grid
 * @grid: grid to clear
 * @height: come on rlly u know
 *
 *
 */
void free_grid(int **grid, int height)
{
	for (; height >= 0; height--)
	{
		free(grid[height]);
	}
	free(grid);
}
