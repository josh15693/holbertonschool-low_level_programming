/**
 * main - prints 0-9
 *
 * Return: 0 success
 */
#include <stdio.h>
int main(void)
{
	char n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);

}
