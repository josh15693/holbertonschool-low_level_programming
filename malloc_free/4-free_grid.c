#include <stdlib.h>
/**
 * free_grid - Frees a 2 dimensional grid previously created by alloc_grid
 * @grid: Pointer to the 2D array of integers to be freed
 * @height: The number of rows in the grid
 *
 * Description: This function iterates through each row of the grid,
 * freeing the allocated memory for the integer array in each row,
 * and finally frees the array of pointers itself.
 *
 * Return: Nothing (void)
 */
void free_grid(int **grid, int height)
{
int i = 0;

if (grid == NULL)
{
return;
}

while (i < height)
{
free(grid[i]);
i++;
}
free(grid);
}
