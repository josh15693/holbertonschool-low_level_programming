#include "main.h"
/**
 * print_square - prints square of n length
 * @size: length of square
 */
void print_square(int size)
{
int c = 0;
int r = 0;

if (size <= 0)
{
_putchar('\n');
break();
}
while (r < size)
{
while (c < size)
{
_putchar('#');
c++;
}
_putchar('\n');
c = 0;
r++;
}
}
