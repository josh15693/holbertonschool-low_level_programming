#include <stdio.h>

int main (void)
{
    int choice;

    while (1)
    {
    printf("Simple Calculator\n");
    printf("1) Addition\n");
    printf("2) Subtraction\n");
    printf("3) Multiplication\n");
    printf("4) Division\n");
    printf("0) Quit\n");
    printf("Enter your choice: \n");

    scanf("%d", &choice);

    if (choice == 1)
    {printf("add\n");}
    }
    return (0);
}