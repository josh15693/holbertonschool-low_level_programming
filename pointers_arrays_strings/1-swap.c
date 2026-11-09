/**
 * swap_int - swaps values of 2 variables
 * @a: 1st variable to be swapped
 * @b: 2nd variable to be swapped
 */
void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}
