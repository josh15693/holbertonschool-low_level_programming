#include "main.h"
/**
 * puts_half - prints second half of character from a string
 * @str: string to process
 */
void puts_half(char *str)
{
int length = 0;
int count = 0;

while (str[length] != '\0')
{
length++;
}
if (length % 2 == 0)
{
while (((length / 2) + count) < length)
{
_putchar(str[((length / 2) + count)]);
count++;
}
}
else
{
while ((((length + 1) / 2) + count) < length)
{
_putchar(str[(((length + 1) / 2) + count)]);
count++;
}
}
_putchar('\n');
}
