#include "main.h"
/**
 * _atoi - converts a string to an integer
 * The number in the string can be preceded by an
 * infinite number of characters
 * You need to take into account all the - and + signs
 * before the number. If there are no numbers in the string,
 * the function must return 0
 * @s: string to be converted
 *
 * Return: integer or 0 if no digit characters in string
 */
int _atoi(char *s)
{
int sign = 1;
int i = 0;
int result = 0;
int found = 0;

/*
 * Loops through string WHILE the character in
 * string is NOT a null byte AND NOT a digit from 0-9.
 * If it finds a minus sign, it inverts the sign placeholder
 * Once the first digit is found, the loop exits
 */
while (s[i] != '\0' && !(s[i] >= '0' && s[i] <= '9'))
{
if (s[i] == '-')
{
sign = sign * -1;
}
i++;
}
/*
 * Once the digit has been found at position 'i', it sets found to
 * 1, then converts the character digits into integers
 */
while (s[i] >= '0' && s[i] <= '9')
{
found = 1;
result = result * 10 + (s[i] - '0');
i++;
}
/*
 * If no digit was found in the string, found would be
 * unchanged and return 0
 */
if (found == 0)
{
return (0);
}
result = (result *sign);
return (result);
}
