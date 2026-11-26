#include <stddef.h>

int int_index(int *array, int size, int (*cmp)(int))
{
    int i = 0;

    if (size <= 0)
    return (-1);

    if (array == NULL)
    return;
    
    while (i < size)
    {
        if (cmp(array[i]) != 0)
        i++;
    }
    if (i == size)
    {
        return (-1);
    }
    else
    {
        return (i);
    }
}