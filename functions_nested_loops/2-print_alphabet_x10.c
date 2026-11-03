/**
 * print_alphabet - function to print the alphabet x10
 *
 * Return: void
 */
#include "main.h"
void print_alphabet_x10(void)
{
    char c;
    int n = 0;
    
    while (n <=10)
    {
    for (c = 'a'; c <= 'z'; c++)
    {
        _putchar(c);
    }
    _putchar('\n');
    n++;
    }
}
