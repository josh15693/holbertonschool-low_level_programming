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
letter = letter + 1;
}
letter = 'A';
while (letter <= 'Z')
{
putchar(letter);
letter = letter + 1;
}
putchar('\n');
return (0);
}
