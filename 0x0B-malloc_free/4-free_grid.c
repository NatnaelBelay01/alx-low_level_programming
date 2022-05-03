#include "main.h"
#include <stdlib.h>
/**
 * free_grid - a fucntion that frees memory
 * @grid: the memory to be freed
 * @height: the number of rows
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
