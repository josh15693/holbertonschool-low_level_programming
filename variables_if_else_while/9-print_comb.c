/**
 * main - print all possible combinations of single-digit numbers
 *
 * Return: 0 success
 */
#include <stdio.h>

int main(void)
{
	int f = 0x30;
	int s = 0x31;

	while (f < 0x39)
	{
		s = f + 1;
		while (s <= 0x39)
		{
			putchar(f);
			putchar(s);
			putchar(',');
			putchar(' ');
			s++;
		}
		f++;
	}
	return (0);
}
