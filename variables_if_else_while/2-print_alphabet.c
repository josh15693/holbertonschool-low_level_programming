/**
 * main - prints lowercase alphabet
 *
 * Return: 0 success
 */
#include <stdio.h>
int main(void)
{
char letter = 'a';
while (letter <= 'z')
{
putchar(letter);
putchar('\n');
letter = letter + 1;
}
return (0);
}
