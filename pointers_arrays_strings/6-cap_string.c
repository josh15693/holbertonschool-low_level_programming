/**
 * cap_string - Capitalizes the first letter of each word in a string
 * @str: The string to be capitalized
 *
 * Return: A pointer to the modified string
 */
char *cap_string(char *str)
{
int i = 0;
int new_word = 1;

while (str[i] != '\0')
{
if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
str[i] == ',' || str[i] == ';' || str[i] == '.' ||
str[i] == '!' || str[i] == '?' || str[i] == '\"' ||
str[i] == '(' || str[i] == ')' || str[i] == '{' ||
str[i] == '}')
{
new_word = 1;
}
else if (new_word == 1)
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 32;
}
new_word = 0;
}
i++;
}
return (str);
}
