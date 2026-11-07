#include <stdio.h>

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

	while (1)
	{
	printf("Simple Calculator\n");
	printf("1) Add\n");
	printf("2) Subtract\n");
	printf("3) Multiply\n");
	printf("4) Divide\n");
	printf("0) Quit\n");
	printf("Choice: ");
	
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
	
	printf("A: ");
	scanf("%f", &a);
	printf("B: ");
	scanf("%f", &b);
	while ((c = getchar()) != '\n' && c != EOF);

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

