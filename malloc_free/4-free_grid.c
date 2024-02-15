#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid- frees a 2 dimensional grid previously created
 *
 * @grid:     double pointer to the 2 diminensional grid
 * @height:   how many rows are in the grid
 *
 * Return:    nothing
 *
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

}
