#include "main.h"

/**
 * print_to_98 - prints all numbers from n to 98
 * @n: starting number
 * Return: void
 */

void print_to_98(int n)
{
	int num;

	while (n != 98)
	{
		num = n;
		if (n < 0)
		{
			_putchar('-');
			num = -n;
		}
		if (num >= 100)
		{
			_putchar((num / 100) + '0');
		}
		if (num >= 10)
		{
			_putchar(((num / 10) % 10) + '0');
		}
		_putchar((num % 10) + '0');
		_putchar(',');
		_putchar(' ');
		if (n < 98)
			n++;
		else
			n--;
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}

