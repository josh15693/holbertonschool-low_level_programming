#include <stdlib.h>
/**
 * _strdup - duplicates a string into newly allocated memory
 * @str: the string to duplicate
 *
 * Return: pointer to the new duplicated string, or NULL if str is NULL
 * or if memory allocation fails
 */
char *_strdup(char *str)
{
char *copy;
int length = 0;
int i = 0;
/*Guards against passing a bad pointer */
if (str == NULL)
{
return (NULL);
}
/*Finds the length of the string to be copied */
while (str[length] != '\0')
{
length++;
}
/* Allocates memory for the length of the string
 *+ 1 for the '\0'
 */
copy = malloc(sizeof(char) * (length + 1));
/* Checks that malloc allocated correctly */
if (copy == NULL)
{
return (NULL);
}
/* Incrementally copies from str to copy*/
while (i <= length)
{
copy[i] = str[i];
i++;
}
return (copy);
}
