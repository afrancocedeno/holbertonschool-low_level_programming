#include <stdlib.h>

/**
 * free_grid - Frees memory used to store a grid
 *
 * @grid: The grid to be freed
 * @height: The number of rows
 */

void free_grid(int **grid, int height __attribute__((unused)))
{
	free(grid);
}
