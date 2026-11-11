/**
 * _memcpy - copies n bytes from src to dest memory area
 * @dest: destionation array
 * @src: source array
 *
 * Return: pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i = 0;

while (i < n)
{
    dest[i] = src[i];
    i++;
}
return (dest);
}
