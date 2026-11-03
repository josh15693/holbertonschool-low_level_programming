/**
 * _isalpha - function to determine if input is alphanumeric
 *
 * @c: character to be checked
 * Return: 1 if alphanumeric, 0 otherwise
 */
#include "main.h"

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

