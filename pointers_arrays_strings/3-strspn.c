/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to search
 * @accept: the characters to match
 *
 * Return: number of bytes in the initial segment of s
 * containing only characters found in accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int tally = 0;
int i = 0;
int c;
int found;

while (s[i] != '\0')
{
c = 0;
found = 0;
while (accept[c] != '\0')
{
if (s[i] == accept[c])
{
found = 1;
break;
}
c++;
}
if (found == 0)
break;
tally++;
i++;
}
return (tally);
}
