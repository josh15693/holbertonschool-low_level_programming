/**
 * jack_bauer - prints every minute of the day from 00:00 to 23:59
 * Return: void
 */
#include "main.h"
void jack_bauer(void)
{
	int hh = 0;
	int h = 0;
	int mm = 0;
	int m = 0;

	while (1)
	{
	_putchar(hh + '0');
	_putchar(h + '0');
	_putchar(':');
	_putchar(mm + '0');
	_putchar(m + '0');
	_putchar('\n');
	if (hh == 2 && h == 3 && mm == 5 && m == 9)
	{
	break;
	}
	m++;
	if (m == 10)
	{
		mm++;
		m = 0;
	}
	if (mm == 6)
	{
		m = 0;
		mm = 0;
		h++;
	}
	if (h == 10)
	{
		hh++;
		h = 0;
		m = 0;
		mm = 0;
	}
	}
}

