#include "main.h"
/**
 * puts2 - prints every second character from a string
 * @str: string to process
 */
void puts2(char *str)
{
int length = 0;
int i = 0;

while (str[length] != '\0')
{
length++;
}
while (i < length)
{
_putchar(str[i]);
i = i + 2;
}
}
