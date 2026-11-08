#include <stdio.h>
/* Functions for add, subtract, multiply. Take input from main function outputs results. */ 
void add(float a, float b)
{
	float result;
	
	result = (a + b);
	printf("Result: %.f\n", result);
}
void subtract(float a, float b)
{
	float result; 

	result = (a -b);
	printf("Result: %.f\n", result);
}
void multiply(float a, float b)
{
	float result; 
	
	result = (a * b);
	printf("Result: %.f\n", result);
}
/* Function for divide. Takes input from main function, produces error if dividing by zero, otherwise outputs results. */
void divide(float a, float b)
{	
	float result;

	if (b == 0)
		{
			printf("Error: division by zero\n");
			return;
		}
	else
	{
	result = (a / b);
	printf("Result: %.2f\n", result);
	}
}
int main(void)
{
	int choice;
	float a;
	float b;
	int c;
/* Prints menu, and loops infinitely until exit */
	while (1)
	{
	printf("Simple Calculator\n");
	printf("1) Add\n");
	printf("2) Subtract\n");
	printf("3) Multiply\n");
	printf("4) Divide\n");
	printf("0) Quit\n");
	printf("Choice: ");
/* Reads choice, clears input buffer, then validates if choice is 1-4, or 0 whereby it exits */
	scanf("%d", &choice);
	while ((c = getchar()) != '\n' && c != EOF);
	if (choice == 0)
	{
		printf("Bye!\n");
		break;
	}
	if (choice < 1 || choice > 4)
	{
		printf("Invalid choice\n");
		continue;
	}
/* Asks user for input, then reads and assigns a and b variables, then clears input buffer */
	printf("A: ");
	scanf("%f", &a);
	printf("B: ");
	scanf("%f", &b);
	while ((c = getchar()) != '\n' && c != EOF);
/* Switch logic brings in functions for operands, then breaks after completion to exit switch logic */
	switch (choice)
	{
		case 1:
			add(a,b);
			break;
		case 2:
			subtract(a,b);
			break;
		case 3:
			multiply(a,b);
			break;
		case 4:
			divide(a,b);
			break;
	}
	}	
	return (0);	
}

