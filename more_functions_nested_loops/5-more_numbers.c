#include "main.h"
/**
 * more_numbers - prints 0 to 14, 10 times
 */
void more_numbers(void)
{
int c = 0;
int n = 0;
while (c <= 10)
{
while (n <= 14)
{
if (n >= 10)
{
_putchar(n / 10 + '0');
}
if (n <= 14)
{
_putchar(n % 10 + '0');
}
n++;
}
c++;
n = 0;
_putchar('\n');
}
}
