/**
 * main - print hexadecimals
 *
 * Return: 0 success
 */
#include <stdio.h>
int main(void)
{
	char h = 0x30;
	int c = 0;

while (c < 10)
{
putchar(h);
c++;
h++;
}
h = 0x61;
c = 0;
while (c < 6)
{
putchar(h);
c++;
h++;
}
putchar('\n');
return (0);
}
