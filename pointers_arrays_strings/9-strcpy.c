/**
 * _strcpy - copies the string pointed to by src, 
 * including the terminating null byte (\0), to the buffer pointed to by dest
 * @dest: destination to copy to 
 * @src: source of the copy
 */
char *_strcpy(char *dest, char *src)
{
int length = 0;
int c = 0;

while (src[length] != '\0')
{
length++;
}
while (c <= length)
{
dest[c] = src[c];
c++;
}
return (dest);
}
