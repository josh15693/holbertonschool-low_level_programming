#include "main.h"
#include <stdio.h>
/**
 * create_array - creates an array of chars and initializes it with a specific char
 * @size: the number of elements in the array
 * @c: the character to initialize each element with
 *
 * Return: pointer to the allocated array, or NULL if size is 0 or malloc fails
 */
char *create_array(unsigned int size, char c)
{
/*i used as a count, also declares variable arr whose type is pointer to char*/
unsigned int i = 0;
char *arr; 
/* checks if size is null, if it is, nothing could be stored in it*/
if (size == NULL)
return (NULL);
/* allocates memory of variable size multiplied by 1 byte */
arr = malloc(size * sizeof(char));
if (arr == 0)
return (NULL);

while (i < size)
{
arr[i] = c;
i++;
}
return (arr);
}
