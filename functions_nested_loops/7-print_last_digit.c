/**
 * print_last_digit - function to print last digit
 *
 * @n: number to be checked
 * Return: n last digit
 */
#include "main.h"
int print_last_digit(int n)
{
    n = n % 10;
    if (n < 0)
    {
    n = -n;
    }
    _putchar (n + '0');
}
