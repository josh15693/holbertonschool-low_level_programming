#include "main.h"
/**
 * print_triangle - print a triangle
 * @size: size of triangle
 */

void print_triangle(int size)
{
	int r = 1;
	int c = 0;

	while (r <= size)
	{
		while (c < (size -1))
		{
			_putchar(' ');
			c++;
		}
		c = 0;
		while (c < r)
		{
			_putchar('#');
			c++;
		}
		r++;
		_putchar('\n');
	}
}

