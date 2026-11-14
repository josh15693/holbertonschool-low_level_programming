#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: pointer to the first element of the matrix
 * @size: size of the square matrix
 */
void print_diagsums(int *a, int size)
{
int total1 = 0;
int total2 = 0;
int i = 0;

while (i < size)
{
total1 += a[i * size + i];
total2 += a[i * size + (size - 1 - i)];
i++;
}
printf("%d, %d\n", total1, total2);
}
