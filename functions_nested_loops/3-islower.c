/**
 * _islower - function to determine if input is lowercase
 *
 * Return: 1 if lowercase
 * Return: 0 otherwise
 */
#include "main.h"

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
