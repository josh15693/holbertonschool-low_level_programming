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

if (n <= 0)
{
printf("\n");
return;
}
while (count < (n - git p1))
{
printf("%d, ", a[count]);
count++;
}
printf("%d\n", a[count]);
}
