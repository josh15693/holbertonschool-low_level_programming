#include <stdlib.h>
/**
 * str_concat - concatenates two strings into a newly allocated buffer
 * @s1: first string (NULL is treated as empty string "")
 * @s2: second string (NULL is treated as empty string "")
 *
 * Return: pointer to newly allocated null-terminated string containing
 *         s1 followed by s2, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
char *newstr;
int length1;
int length2;
int i = 0;
int c;
/* finds length of s1 and s2*/
for (length1 = 0; s1[length1] != '\0'; length1++);
for (length2 = 0; s2[length2] != '\0'; length2++);
/* allocates memory for total length */
newstr = malloc(sizeof(char) * (length1 + length2 + 1));
if (newstr == NULL)
{
return (NULL);
}
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
/*copies s1 and s2 INTO newstr*/
while (i < length1)
{
newstr[i] = s1[i];
i++;   
}
c = i;
i = 0;
while (i < length2)
{
newstr[c + i] = s2[i];
i++;
}
return (newstr);
}
