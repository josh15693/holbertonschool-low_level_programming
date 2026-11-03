/**
 * main - prints _putchar
 *
 * Return: 0 success
 */

#include "main.h"

int main(void)
{
	char word[] = "_putchar";
	int c = 0;

	while (word[c] != '\0')
	{
		_putchar(word[c]);
		c++;
	}
	_putchar('\n');
	return (0);
}
