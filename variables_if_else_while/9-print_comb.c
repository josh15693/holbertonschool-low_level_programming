/**
 * main - print all possible combinations of single-digit numbers
 *
 * Return: 0 success
 */
#include <stdio.h>

int main(void)
{
	int n = 0x30;

	while (n <= 0x39)
	{
		putchar(n);
		n++;
		if (n <= 0x39)
		{
			putchar(',');
			putchar(' ');
		}
	}

	return (0);
}
