#include <stdio.h>
#include "main.h"
/**
 * print_array - prints n elements of an array
 * @a: array to print from
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
int count = 0;

if (count == 0)
{
printf("%d", a[count]);
}
else if (count <= 0)
{
return;
}
while (count < (n - 1))
{
printf("%d, ", a[count]);
count++;
}
printf("%d\n", a[count]);
}
