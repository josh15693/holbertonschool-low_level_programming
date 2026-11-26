#include <stddef.h>
/**
 * array_iterator - executes a function on each element of an array
 * @array: the array to iterate over
 * @size:  size of the array
 * @action: pointer to the function to execute on each element
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i = 0;

if (array == NULL)
return;

if (action == NULL)
return;

while (i < size)
{
action(array[i]);
i++;
}
}
