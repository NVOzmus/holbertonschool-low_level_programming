#include "main.h"
/**
 * free_grid - main function
 * @grid: primary function
 * @height: height measurement
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
