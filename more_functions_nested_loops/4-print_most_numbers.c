#include "main.h"
/**
 * print_numbers - prints 0 to 9 except 2 and 4
 */
void print_most_numbers(void)
{
int c = 0;
while (c <= 9)
{
if (c == 2 || c == 4)
{
c++;
}
else
{
_putchar(c + '0');
c++;
}
}
_putchar('\n');
}
