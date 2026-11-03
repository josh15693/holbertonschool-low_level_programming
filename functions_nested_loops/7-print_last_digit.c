/**
 * print_last_digit - function to print last digit
 *
 * @n: number to be checked
 * Return: n last digit
 */
#include "main.h"
int print_last_digit(int n)
{
if (n > 0)
{
n = n % 10;
return (n);
}
else
{
n = n % 10;
return (-n);
}
}
