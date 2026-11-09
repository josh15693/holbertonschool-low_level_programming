/**
 * _strcat - concatinates two strings
 * @dest: destionation string
 * @src: destionation string
 *
 * Return: concatinated string
 */
char *_strcat(char *dest, char *src)
{
int length_src = 0;
int length_dest = 0;
int i = 0;

if (src[0] = '\0')
{
    return(dest)
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
while (length_src >= 0)
{
dest[length_dest] = src[i];
i++;
length_src--;
length_dest++;
}
dest[length_dest] = '\0';
return (dest);
}
