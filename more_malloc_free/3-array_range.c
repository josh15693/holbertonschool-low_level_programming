#include <stdlib.h>
/**
 * array_range - creates an array of integers containing all values
 *               from min (inclusive) to max (inclusive)
 * @min: the smallest value in the array
 * @max: the largest value in the array
 *
 * Return: pointer to the newly created array, or NULL if min > max
 *         or if memory allocation fails
 */
int *array_range(int min, int max)
{
int *newarr;
int len = 0;
int i = 0;

if (min > max)
return (NULL);

len = max - min + 1;

newarr = malloc(sizeof(int) * len);
if (newarr == NULL)
return (NULL);

while (i < len)
{
newarr[i] = min + i;
i++;
}
return (newarr);
}
