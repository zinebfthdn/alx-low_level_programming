#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees 2nd array
 * @grid: 2nd grid
 * @height: height dimension of grid
 * Description: freing memory of grid
 * Return: rien
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
