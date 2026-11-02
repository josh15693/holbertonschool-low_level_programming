/**
 * main - prints reverse alphabet
 *
 * Return: 0 success
 */
#include <stdio.h>
int main(void)
{
	char l = 'z';

	while (l >= 'a')
	{
		putchar(l);
		l--;
	}
	putchar('\n');
	return (0);
}
