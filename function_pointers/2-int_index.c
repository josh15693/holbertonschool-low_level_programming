#include <stddef.h>
/**
 * int_index - searches for an integer in an array using
 * a comparison function
 * @array: the array to search
 * @size: the size of the array
 * @cmp: pointer to the comparison function
 * Return: the index of the first element for which the
 * comparison function returns a non-zero value, or -1 if
 * no such element is found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;

if (size <= 0)
return (-1);
if (array == NULL)
return (-1);
if (cmp == NULL)
return (-1);

while (i < size)
{
if (cmp(array[i]) != 0)
{
return (i);
}
i++;
}
return (-1);
}

