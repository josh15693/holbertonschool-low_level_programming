/**
 * _strstr - finds substring within a source string
 * @haystack: source string to search through
 * @needle: substring to find
 *
 * Return: Pointer to start of string location, null otherwise
 */
char *_strstr(char *haystack, char *needle)
{
int i = 0;
int c = 0;

if (*needle == '\0')
return (haystack);
while (haystack[i] != '\0')
{
c = 0;
while (needle[c] != '\0' && haystack[i + c] == needle[c])
{
c++;
}
if (needle[c] == '\0')
return (haystack + i);
i++;
}
return (0);
}
