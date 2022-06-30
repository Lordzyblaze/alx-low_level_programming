#include "main.h"
#include <stdlib.h>

/**
 * free_grid -> removing memory allocation
 * @grid: grid to be freed
 * @height: height of matrix
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
int i;

if (grid != NULL || height != 0)
{
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
}

