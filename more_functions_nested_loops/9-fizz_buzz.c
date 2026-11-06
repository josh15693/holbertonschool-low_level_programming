#include <stdio.h>
/**
 * main - Fizz-Buzz test
 * Return: 0 success
 */
int main(void)
{
int c = 1;
while (c <= 100)
{
if (c % 15 == 0)
{
printf("FizzBuzz");
}
else if (c % 3 == 0 && c % 5 != 0)
{
printf("Fizz");
}
else if (c % 5 == 0 && c % 3 != 0)
{
printf("Buzz");
}
else
{
printf("%d", c);
}
c++;
}
putchar('\n');
return (0);
}
