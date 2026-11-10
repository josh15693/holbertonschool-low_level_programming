/**
 * string_toupper - changes lowercase to uppercase
 * @str: string to modify
 *
 * Return: string
 */
char *string_toupper(char *str)
{
int i = 0;

while (str[i] != '\0')
{
if (str[i] >= 0x61 && str[i] <= 0x7A)
str[i] = str[i] - 0x20;
i++;
}
return (str);
}
