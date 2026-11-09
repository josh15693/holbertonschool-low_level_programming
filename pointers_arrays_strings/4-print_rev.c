#include "main.h"
/**
 * print_rev - reverse prints a string
 * @s: string to print
 */
void print_rev(char *s)
{
int length = 0;

while (s[length] != '\0')
{
length++;
}
while (s[length] > 0)
{
length--;
_putchar(s[length]);

}
_putchar('\n');
}
