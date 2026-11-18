/**
 * alloc_grid - creates a 2D array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to the 2D array, or NULL on failure
 */
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
int i = 0;
int j;
int **grid;

if (width <= 0)
return (NULL);

if (height <= 0)
return (NULL);

grid = malloc(sizeof(int *) * height);
if (grid == NULL)
return (NULL);

while (i < height)
{
grid[i] = malloc(sizeof(int) * width);
if (grid[i] == NULL)
{
j = 0;
while (j < i)
{
free(grid[j]);
j++;
}
free(grid);
return (NULL);
}

j = 0;
while (j < width)
{
grid[i][j] = 0;
j++;
}
i++;
}

return (grid);
}