/**
 * _abs - function that prints the absolute of a number
 *
 * Description: if it is positive if will return 1 and print +
 * if negative will return -1 and print -
 * if zero will return 0 and print 0
 *
 * @n: number to be manipulated
 * Return: absolute number
 */
#include "main.h"

int _abs(int n)
{
if (n < 0)
{
return (-n);
}
else
{
return (n);
}
}
