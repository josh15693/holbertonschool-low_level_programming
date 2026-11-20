#include <stdlib.h>
/**
 * _calloc - allocates memory for an array using malloc,
 * then zeroes all bytes in array
 *
 * @nmemb: number of elements in the array
 * @size: size of the elements in the array
 *
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
unsigned int i = 0;
char *ptr_bytes;
/* Returns null if input of nmemb or size is 0 */
if (nmemb == 0 || size == 0)
return (NULL);
/* Allocates memory to a pointer (ptr) */
ptr = malloc(nmemb * size);
/* Checks allocation is successful */
if (ptr == NULL)
return (NULL);
/*
 * Declares and casts ptr_bytes to a char *
 * so that each byte can be accessed and changed
 * (void * cannot be deferenced where as char * can)
 * Sets values within array to 0
 */
ptr_bytes = (char *)ptr;
while (i < nmemb * size)
{
ptr_bytes[i] = 0;
i++;
}
return (ptr);
}
