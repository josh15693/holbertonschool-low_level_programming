#include "main.h"
/**
 * print_line - prints line of n length
 */
void print_line(int n)
{
int c;
c = 0;

while (c >= 0 && c < n)
{
_putchar('_');
c++;
}
_putchar('\n');
}
