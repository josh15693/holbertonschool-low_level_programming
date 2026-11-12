/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string to be searched
 * @accept: the string containing the bytes to search for
 *
 * Return: a pointer to the first matching byte in s,
 * or NULL if no match is found
 */
char *_strpbrk(char *s, char *accept)
{
int i = 0;
int found = 0;
int c = 0;

while (s[i] != '\0')
{
while (accept[c] != '\0')
{
if (s[i] == accept[c])
{
found = 1;
break;
}
else
{
c++;
}
}
if (found == 1)
{
return (&s[i]);
}
else
{
i++;
c = 0;
}
}
return (0);
}
