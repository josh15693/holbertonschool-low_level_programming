/**
 * main - prints lowercase alphabet 
 * without printing e and q
 * Return: 0 success
 */
#include <stdio.h>
int main(void)
{
	char letter;

	for (letter = 'a'; letter < 'z'; letter++)
	{
		if (letter == 'e' || letter == 'q')
		{
			continue;
		}
		putchar(letter);
	}
	putchar(letter);
	return (0);

}
