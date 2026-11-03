/**
 * print_sign: function that prints the sign of a number
 * if it is positive if will return 1 and print +
 * if negative will return -1 and print -
 * if zero will return 0 and print 0
 *
 * @n: number to be checked
 * Return: + if positive, 0 if 0, - if negative
 */
#include "main.h"

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
