/**
 * _islower - function to determine if input is lowercase
 *
 * Return: 1 if lowercase
 * Return: 0 otherwise
 */
#include "main.h"
char c;
int _islower(int c)
{
if (c >= 0x61 && c <= 0x7A)
{
return(1);
}
else
{
return(0);
}
}
