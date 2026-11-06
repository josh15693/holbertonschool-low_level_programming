#include "main.h"
/**
 * print_diagonal - prints diagonal line of n length
 * @n: length of line
 */
void print_diagonal(int n)
{
    int c = 0;
    int s = 0;
    if (n <= 0)
    {
        _putchar('\n');
    }
    while (c >= 0 && c < n)
    {
        while (s < c)
        {
        _putchar(' ');
        s++;
        }
        _putchar('\\');
        c++;
         _putchar('\n');
        s = 0;
    }
   
}
