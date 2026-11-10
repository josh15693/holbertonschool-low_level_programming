/**
 * _strcmp - compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: 0 is equal, else is different
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
int res;
while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
{
i++;
}
res = s2[i] - s1[i];
return (res);
}
