/**
 * reverse_array - reverses array
 * @a: array to reverse
 * @n: size of array
 *
 * Return: 0 is equal, else is different
 */
void reverse_array(int *a, int n)
{
int temp[50];
int i = 0;
int c;

while (i < n)
{
temp[i] = a[i];
i++;
}
i = 0;
c = n - 1;
while (i < n)
{
a[i] = temp[c];
i++;
c--;
}
}
