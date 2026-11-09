/**
 * _strcat - concatinates two strings, using n bytes
 * @dest: destionation string
 * @src: destionation string
 * @n: number of bytes to append
 *
 * Return: concatinated string
 */
char *_strncat(char *dest, char *src, int n)
{
int length_src = 0;
int length_dest = 0;
int i = 0;

if (src[0] == '\0')
{
return (dest);
}
while (src[length_src] != '\0')
{
length_src++;
}
while (src[length_dest] != '\0')
{
length_dest++;
}
length_dest = length_dest + 2;
while (n >= 0)
{
dest[length_dest] = src[i];
i++;
n--;
length_dest++;
}
if ((n - length_src) < 0)
{
dest[length_dest] = '\0';
return (dest);
}
}
