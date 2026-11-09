/**
 * _strncpy - copies string from src to dest
 * @dest: destionation string
 * @src: destionation string
 * @n: number of bytes to append
 *
 * Return: concatinated string
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (n > 0)
{
dest[i] = src[i];
n--;
i++;
}
return (dest);
}
