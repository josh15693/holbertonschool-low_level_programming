/**
 * print_sign: function that prints the sign of a number
 *
 * @n: number to be checked
 * Return: + if positive, 0 if 0, - if negative
 */
#include "main.h"

int print_sign(int n)
{
    if (n > 0)
    {
        return ('+');
    }
    else if (n == 0)
    {
        return (0);
    }
    else 
    {
        return ('-');
    }
}