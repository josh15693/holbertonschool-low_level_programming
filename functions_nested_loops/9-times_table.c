/**
 * times_table - prints 9 times table starting with 0
 * 
 * Return: void
 */

#include "main.h"

void times_table(void)
{
	int row = 0;
	int column = 0;

	while (row < 10)
	{
		if (column == 10)
		{
			row++;
			column = 0;
			_putchar('\n');
		}
		else
		{
			if (column == 0 || row == 0)
			{
				_putchar('0');
			}
			else if (((row * column) / 10) == 0)
			{
				_putchar((row * column) % 10 + '0');
			}
			else
			{
				_putchar((row * column) / 10 + '0');
				_putchar((row * column) % 10 + '0');
			}
			if (column != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			column++;
		}
	}
}

