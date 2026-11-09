/**
 * _strlen - counts length of string
 * @s: string to be length checked
 * Return: returns length of string
 */
int _strlen(char *s)
{
int c = 0;

while (s[c] != '\0')
{
c++;
}
return(c);
}
