#include <stdio.h>

void add(float a, float b)
{
	float result;
	
	result = (a + b);
	printf("%.1f\n", result);
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
	}

	}	
	return (0);
	
}
