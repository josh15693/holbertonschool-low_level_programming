#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string (NULL is treated as an empty string)
 * @s2: second string (NULL is treated as an empty string)
 * @n: maximum number of bytes to copy from s2
 *
 * Return: pointer to the newly allocated concatenated string,
 *         or NULL if memory allocation fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len_s1 = 0;
unsigned int len_s2 = 0;
char *newstr;
unsigned int i = 0;
unsigned int j = 0;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[len_s1] != '\0')
{
len_s1++;
}
while (s2[len_s2] != '\0')
{
len_s2++;
}
if (n >= len_s2)
{
n = len_s2;
}
newstr = malloc(sizeof(char) * (len_s1 + n + 1));
if (newstr == NULL)
{
return (NULL);
}
while (i < len_s1)
{
newstr[i] = s1[i];
i++;
}
while (j < n)
{
newstr[i + j] = s2[j];
j++;
}
newstr[i + j] = '\0';
return (newstr);
}
